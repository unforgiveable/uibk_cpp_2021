cmake_minimum_required(VERSION 3.10)

project(task03)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_BUILD_TYPE Release)

add_subdirectory(app)
add_subdirectory(libBar)
add_subdirectory(libBaz)
add_subdirectory(libFoo)

add_executable(Task03 app/app.cpp)

target_link_libraries(Task03 PUBLIC libBar)
target_link_libraries(Task03 PUBLIC libFoo)
target_link_libraries(Task03 PUBLIC libBaz)

target_include_directories(Task03 PUBLIC
    "${PROJECT_BINARY_DIR}")

