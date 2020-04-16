#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>

#include <iostream>

#include <grpcpp/grpcpp.h>

#include "image.pb.h"
#include "image.grpc.pb.h"

cv::Mat run(cv::Mat &img)
{
    std::vector<uchar> buffer;
    cv::imencode(".png", img, buffer);

    auto channel = grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials());
    auto stub = Rotate::Stub(channel);

    image request;
    request.set_png(std::string(buffer.begin(), buffer.end()));

    grpc::ClientContext context;

    image response;

    stub.rot90(&context, request, &response);

    buffer = std::vector<uchar>(response.png().begin(), response.png().end());

    cv::Mat dest = cv::imdecode(buffer, cv::IMREAD_COLOR);

    return dest;
}

int main(int argc, char *argv[])
{
    cv::Mat image;
    image = cv::imread(argv[1], cv::IMREAD_COLOR);   // Read the file

    if(! image.data )                              // Check for invalid input
    {
        std::cout <<  "Could not open or find the image" << std::endl ;
        return -1;
    }

    cv::Mat dst = run(image);

    cv::namedWindow( "Display window", cv::WINDOW_AUTOSIZE );// Create a window for display.
    cv::imshow( "Display window", dst );                   // Show our image inside it.

    cv::waitKey(0);                                          // Wait for a keystroke in the window
    return 0;
}