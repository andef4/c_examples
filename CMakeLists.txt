cmake_minimum_required (VERSION 2.6)
project (main)

add_executable(variable_sizes src/variable_sizes.c)
add_executable(buffer src/buffer.c)
add_executable(split_chars src/split_chars.c)
add_executable(replace_tabs src/replace_tabs.c)
add_executable(memory src/memory.c)
add_executable(const src/const.c)
add_executable(array_pointer src/array_pointer.c)

SET (CMAKE_C_COMPILER             "/usr/bin/clang")
SET (CMAKE_C_FLAGS                "-Wall -pedantic")	
