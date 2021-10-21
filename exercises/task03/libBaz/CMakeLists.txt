add_library(libBaz baz.cpp)

target_link_libraries(libBaz PUBLIC libBar)

target_include_directories(libBaz
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})