cmake_minimum_required(VERSION 3.10)
project(ocltest)

include_directories(common-lib-amd-APPSDK-3.0/3-0/include)
link_directories(common-lib-amd-APPSDK-3.0/3-0/lib/x86_64)

add_executable(ocltest main.cpp)
target_link_libraries(ocltest OpenCL)