cmake_minimum_required(VERSION 2.8)

project(rotate_server)

# OpenCV 4 is compiled with c++-11
set (CMAKE_CXX_STANDARD 11)

find_package(OpenCV REQUIRED)
find_package(Protobuf REQUIRED)

add_executable(rotate_server rotate_server.cpp image.grpc.pb.cc image.pb.cc)

link_directories(/usr/local/lib)
target_link_libraries( rotate_server ${OpenCV_LIBS} protobuf grpc++_unsecure)

