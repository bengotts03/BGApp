cmake_minimum_required(VERSION 3.31)
project(BGApp)

set(CMAKE_CXX_STANDARD 20)

if(NOT DEFINED CMAKE_TOOLCHAIN_FILE AND DEFINED ENV{VCPKG_ROOT})
    set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake" CACHE STRING "")
endif()

file(GLOB_RECURSE HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.h" "${CMAKE_CURRENT_SOURCE_DIR}/src/*.hpp")
file(GLOB_RECURSE SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_library(BGApp STATIC ${HEADERS} ${SOURCE})

find_package(glfw3 CONFIG REQUIRED)
target_link_libraries(BGApp
        PUBLIC
        glfw
)