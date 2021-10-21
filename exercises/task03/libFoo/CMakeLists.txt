add_library(libFoo foo.cpp)

target_include_directories(libFoo
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})