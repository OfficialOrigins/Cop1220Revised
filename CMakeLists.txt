cmake_minimum_required(VERSION 3.30)
project(Cop1220Revised C)

set(CMAKE_C_STANDARD 11)

add_executable(Cop1220Revised src/main.c
        src/lyrics.c
        src/twitter.c
        src/HurricaneCatCheck.c)
