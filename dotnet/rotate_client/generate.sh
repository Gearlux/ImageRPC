#!/bin/sh
brew install nuget
nuget install grpc
# dotnet new console -n rotate_client .
protoc --plugin=protoc-gen-grpc=`which grpc_csharp_plugin` --csharp_out=. --grpc_out=. -I ../../grpc ../../grpc/image.proto 
dotnet add package Grpc
dotnet add package Grpc.Core
dotnet add package Grpc.Tools
dotnet add package Google.Protobuf
dotnet add package OpenCvSharp4
