#!/bin/sh
protoc --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` --cpp_out=. --grpc_out=. -I . image.proto 
