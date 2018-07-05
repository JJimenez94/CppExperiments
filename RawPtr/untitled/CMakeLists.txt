cmake_minimum_required(VERSION 2.8)

project(TestRawPtr)

set(SRC "main.cpp"
        Clase1.cpp
        Clase1.h)

add_executable(${PROJECT_NAME} ${SRC})
