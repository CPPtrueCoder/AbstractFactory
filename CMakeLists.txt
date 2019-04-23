cmake_minimum_required(VERSION 2.8)
set(CMAKEE_BUILD_TYPE Debug)
project(AbstractFactory)
set(CMAKE_CXX_STANDARD 17)
add_executable(${PROJECT_NAME} "main.cpp""tanks.h""tanks.cpp""factories.h""factories.cpp""M1A1.h"
    "M1A1.cpp""M60.h""M60.cpp""M550.h""M550.cpp""heavyfactrory.h""heavyfactrory.cpp"
    "MediumFactory.h""mediumfactory.cpp""Lightfactory.h""lightfactory.cpp")
