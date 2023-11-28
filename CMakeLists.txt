cmake_minimum_required(VERSION 3.24)
project(Keygenerator C)

set(CMAKE_C_STANDARD 11)

add_executable(Keygenerator main.c form.h form.c Generate.c)
