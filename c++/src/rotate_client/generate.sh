#!/bin/sh
../../build/grpc/bin/protoc --plugin=protoc-gen-grpc=../../build/grpc/src/grpc-build/grpc_cpp_plugin --cpp_out=. --grpc_out=. -I ../../../grpc ../../../grpc/image.proto 
