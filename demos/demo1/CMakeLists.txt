cmake_minimum_required(VERSION 2.8)
project(demo1 LANGUAGES C)
include_directories(include)
link_directories(lib)
add_subdirectory(src bin)

#aux_source_directory(${PROJECT_SOURCE_DIR} MAIN_FILE)
#message(${MAIN_FILE})


#target_link_libraries(demo1 jt)