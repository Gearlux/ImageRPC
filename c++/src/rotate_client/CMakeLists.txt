project (rotate_client)

# OpenCV 4 is compiled with c++-11
set (CMAKE_CXX_STANDARD 11)

if (0)  
  set(protobuf_MODULE_COMPATIBLE TRUE)
  find_package(Protobuf CONFIG REQUIRED)
  message(STATUS "Using protobuf ${protobuf_VERSION}")

  set(_PROTOBUF_LIBPROTOBUF protobuf::libprotobuf)
  set(_PROTOBUF_PROTOC $<TARGET_FILE:protobuf::protoc>)

  # Find gRPC installation
  # Looks for gRPCConfig.cmake file installed by gRPC's cmake installation.
  find_package(gRPC CONFIG REQUIRED)
  message(STATUS "Using gRPC ${gRPC_VERSION}")

  set(_GRPC_GRPCPP_UNSECURE gRPC::grpc++_unsecure)
  set(_GRPC_CPP_PLUGIN_EXECUTABLE $<TARGET_FILE:gRPC::grpc_cpp_plugin>)
endif()

add_executable(rotate_client main.cpp image.grpc.pb.cc image.pb.cc)

# link_directories(${CMAKE_BINARY_DIR}/grpc/src/grpc-build)
# target_link_directories( rotate_client ${CMAKE_BINARY_DIR}/grpc/src/grpc-build)

link_directories(/usr/local/lib)
target_link_libraries( rotate_client ${OpenCV_LIBS} protobuf grpc++_unsecure)
