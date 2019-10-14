cmake_minimum_required(VERSION 3.9)
project(cppkata)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

add_library(cppkata src/Calculator.cc src/Calculator.h src/Budget.h src/BudgetRepo.h)

add_executable(cppkata_test test/CalculatorTest.cc test/MockTest.cc test/StubBudgetRepo.h)
target_link_libraries(cppkata_test gtest gmock gtest_main cppkata)
