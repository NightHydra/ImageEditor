cmake_minimum_required(VERSION 3.31)
project(ImageEditor)

set(CMAKE_CXX_STANDARD 14)

find_package(OpenCV)

add_executable(ImageEditor src/console_main.cpp)

add_subdirectory(libs/ImageEditingTools)

target_link_libraries(ImageEditor PUBLIC image_editing_library ${OpenCV_LIBS})