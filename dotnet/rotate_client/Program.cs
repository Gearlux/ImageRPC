using System;
using OpenCvSharp;

using Grpc.Core;

namespace rotate_client
{
    class Program
    {
        static Mat rotate(Mat img)
        {
            Channel channel = new Channel("localhost:50051", ChannelCredentials.Insecure);

            var client = new Rotate.RotateClient(channel);

            var request = new image();
            byte[] bytes = img.ImEncode(".png");
            
            request.Png = Google.Protobuf.ByteString.CopyFrom(bytes);

            var response = client.rot90(request);

            Mat result = Mat.ImDecode(response.Png.ToByteArray());

            return result;
        }
        
        static void Main(string[] args)
        {
            Mat img = new Mat("../../photo-1515061942942-2fb5aa4d63c9.jpg", ImreadModes.Color);
            
            img = Program.rotate(img);

            Cv2.ImShow("Rotated Image", img);
            Cv2.WaitKey(10000);
            Cv2.DestroyAllWindows();
        }
    }
}
