cmake_minimum_required(VERSION 2.8)

project(rotate_image)

# https://github.com/grpc/grpc/blob/master/examples/cpp/helloworld/cmake_externalproject/CMakeLists.txt
include(ExternalProject)

# OpenCV
# The OpenCV contrib repo external project
ExternalProject_Add(OpenCV_contrib
  PREFIX opencv_contrib
  GIT_REPOSITORY https://github.com/opencv/opencv_contrib.git
  GIT_TAG 4.1.0
  # This is a support repository for OpenCV 3.x and does not contain any
  # build or install rules. This will be hooked into OpenCV which will control
  # those steps.
  CONFIGURE_COMMAND ""
  BUILD_COMMAND ""
  INSTALL_COMMAND ""
  )

ExternalProject_Add(opencv
  PREFIX		opencv
  GIT_REPOSITORY	https://github.com/opencv/opencv.git
  GIT_TAG 4.1.0
  CMAKE_CACHE_ARGS
    -DBUILD_opencv_python2:BOOL=OFF -DBUILD_opencv_python3:BOOL=OFF -DBUILD_TESTS:BOOL=OFF -DBUILD_PERF_TESTS:BOOL=OFF
    -DCMAKE_INSTALL_PREFIX:PATH=${CMAKE_CURRENT_BINARY_DIR}/opencv
    -DOPENCV_EXTRA_MODULES_PATH:PATH=${CMAKE_CURRENT_BINARY_DIR}/opencv_contrib/src/OpenCV_contrib/modules
  # Do not install opencv
  # https://stackoverflow.com/questions/37838786/how-to-not-make-install-step-when-building-external-project-with-cmake
  # STEP_TARGETS build
  UPDATE_DISCONNECTED 1
  # INSTALL_COMMAND ""
  DEPENDS OpenCV_contrib
)

if (0)
# Builds gRPC based on locally checked-out sources and set arguments so that all the dependencies
# are correctly located.
ExternalProject_Add(grpc
  PREFIX grpc
  GIT_REPOSITORY https://github.com/grpc/grpc.git
  GIT_TAG v1.21.3
  CMAKE_CACHE_ARGS
        -DgRPC_INSTALL:BOOL=ON
        -DgRPC_BUILD_TESTS:BOOL=OFF
        -DCMAKE_INSTALL_PREFIX:PATH=${CMAKE_CURRENT_BINARY_DIR}/grpc
)

include_directories(${CMAKE_BINARY_DIR}/grpc/include)
endif()

# Make sure we find opencv
if (EXISTS ${CMAKE_BINARY_DIR}/opencv/src/opencv-build/OpenCVConfig.cmake)
  include(${CMAKE_BINARY_DIR}/opencv/src/opencv-build/OpenCVConfig.cmake)
  include_directories(${OpenCV_INCLUDE_DIRS})
endif()

add_subdirectory(rotate_client)
