cmake_minimum_required(VERSION 3.0)

project(lc3simulator)

set (CMAKE_CXX_STANDARD 11)

set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost 1.45.0 COMPONENTS program_options)
#include_directories(D:/ICS/boost_1_77_0)

set(SOURCES
    src/main.cpp
    src/memory.cpp
    src/register.cpp
    src/simulator.cpp)

add_executable(lc3simulator ${SOURCES})

target_include_directories(lc3simulator
PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
#target_link_libraries(lc3simulator D:/ICS/boost_1_77_0/stage/lib)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    target_link_libraries(lc3simulator ${Boost_LIBRARIES})
endif()
