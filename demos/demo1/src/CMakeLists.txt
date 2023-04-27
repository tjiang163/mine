add_definitions("-Wall -g")
link_libraries("pthread")
add_subdirectory(thrd)
#link_libraries("jt")
add_executable(demo1  jt.c)
target_link_libraries(demo1 jt)

