cmake_minimum_required(VERSION 2.8)

project(TestRawPtr)

set(SRC "main.cpp"
        Clase1.cpp
        Clase1.h
        Clase2.cpp
        Clase2.h
        Car.h)

add_executable(${PROJECT_NAME} ${SRC})
