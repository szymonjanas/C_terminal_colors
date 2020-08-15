cmake_minimum_required (VERSION 3.7)

project (color) 

include_directories(source)
include_directories(source/color)

set(COLOR
    source/color/color.c
    source/example.c
)

add_executable(${PROJECT_NAME} ${COLOR})