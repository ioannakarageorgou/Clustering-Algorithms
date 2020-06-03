cmake_minimum_required(VERSION 3.10)

project(ProjectName)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(executeTests distance_test.cpp )

target_link_libraries(executeTests ${GTEST_LIBRARIES} pthread)