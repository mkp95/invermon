cmake_minimum_required(VERSION 3.15)

find_package(Python3 REQUIRED)

set(BL_SDK_BASE $ENV{BL_SDK_BASE})
include(${BL_SDK_BASE}/cmake/project.cmake)

project(invermon)

sdk_add_generic_main()
