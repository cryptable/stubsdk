cmake_minimum_required(VERSION 3.7)
project(stubsdk)

set(CMAKE_CXX_STANDARD 11)
# Application library
set(SOURCE_FILES src/stubsdk_c.cpp src/stubsdk_c.h src/Functions.cpp src/Functions.h)
add_library(stubsdk ${SOURCE_FILES})

# Application executable

# Unit Tests
enable_testing()

set(TEST_SOURCE_FILES test/FunctionsTest.hpp)
add_executable(stubsdk_test ${TEST_SOURCE_FILES})
target_link_libraries(stubsdk_test stubsdk)

add_test(NAME stubsdk_unit COMMAND stubsdk_test)
