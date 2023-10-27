cmake_minimum_required(VERSION 3.5.0)
project(text VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(MAIN_SRCS ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)
include_directories(INCLUDE_SRCS ${CMAKE_CURRENT_SOURCE_DIR}/src/include)

add_executable(text ${MAIN_SRCS})

include(CPack)