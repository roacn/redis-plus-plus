project(test_redis++)

cmake_minimum_required(VERSION 3.0.0)

set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -W -Werror -fPIC")

set(PROJECT_SOURCE_DIR ${PROJECT_SOURCE_DIR}/src/sw/redis++)

file(GLOB PROJECT_SOURCE_FILES "${PROJECT_SOURCE_DIR}/*.cpp")

add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_FILES})

# hiredis dependency
find_path(HIREDIS_HEADER hiredis)
target_include_directories(${PROJECT_NAME} PUBLIC ${HIREDIS_HEADER})

find_library(HIREDIS_STATIC_LIB libhiredis.a)
target_link_libraries(${PROJECT_NAME} ${HIREDIS_STATIC_LIB})

# redis++ dependency
target_include_directories(${PROJECT_NAME} PUBLIC ../src)

set(REDIS_PLUS_PLUS_LIB ${CMAKE_CURRENT_BINARY_DIR}/../lib/libredis++.a)
target_link_libraries(${PROJECT_NAME} ${REDIS_PLUS_PLUS_LIB})