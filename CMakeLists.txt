# 0.) Create Source and CMakeFile
# 1.) mkdir build
# 2.) cd build
# 3.) cmake .. - Generating the Build files / Configure the project
# 4.) cmake --build . # start the compilation
# 5.) ./Executable # Execute the executable


cmake_minimum_required(VERSION 3.22)
project(LearningCmake VERSION 0.0.1 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CUS_LIBRARY_NAME Library)
set(APP_EXECUTABLE_NAME Executable)

option(COMPILE_EXECUTABLE "Whether to compile the executable" OFF)

add_subdirectory(src)

if(COMPILE_EXECUTABLE)
    add_subdirectory(app)
else()
    message("compiling")
endif()
