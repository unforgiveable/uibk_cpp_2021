add_library(libBar bar.cpp)

target_include_directories(libBar
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})