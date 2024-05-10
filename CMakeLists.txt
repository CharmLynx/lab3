cmake_minimum_required(VERSION 3.5.1)
set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS_RELEASE "-O2")

add_library(main /home/maryna/Documents/lab3/main.cpp)

project(my_project)

set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost 1.55 REQUIRED COMPONENTS unit_test_framework)

add_executable(test /home/maryna/Documents/lab3/test.cpp)
target_include_directories(test PRIVATE ${Boost_INCLUDE_DIRS})
target_link_libraries(test ${Boost_LIBRARIES})
