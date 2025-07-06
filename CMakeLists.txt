cmake_minimum_required(VERSION 3.10)
project(orgChartTestGen)

set(CMAKE_CXX_STANDARD 14)

enable_testing()

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(runTests ../tests/employee_test.cpp ../src/employee.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
