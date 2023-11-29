# 0.) Create Source and CMakeFile
# 1.) mkdir build
# 2.) cd build
# 3.) cmake .. - Generating the Build files / Configure the project
# 4.) cmake --build . # start the compilation
# 5.) ./Executable # Execute the executable


cmake_minimum_required(VERSION 3.22)
project(LearningCmake VERSION 0.0.1 LANGUAGES C CXX)

add_subdirectory(src)
add_subdirectory(app)
