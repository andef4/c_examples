cmake_minimum_required (VERSION 2.6)
project (main)

add_executable(variable_sizes src/1_basic/variable_sizes.c)
add_executable(buffer src/1_basic/buffer.c)
add_executable(split_chars src/1_basic/split_chars.c)
add_executable(replace_tabs src/1_basic/replace_tabs.c)
add_executable(memory src/1_basic/memory.c)
add_executable(const src/1_basic/const.c)
add_executable(array_pointer src/1_basic/array_pointer.c)

SET (CMAKE_C_COMPILER             "/usr/bin/clang")
SET (CMAKE_C_FLAGS                "-Wall -pedantic")	
