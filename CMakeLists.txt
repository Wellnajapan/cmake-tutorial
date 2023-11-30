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

set(CUS_LIBRARY_NAME "cuslib")
set(APP_EXECUTABLE_NAME Executable)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")

include(AddGitSubmodule)
# include(F

# FetchContent_Declare(

# )
# FetchContent_MakeAvailable()

add_git_submodule(external/json)
add_git_submodule(external/httplib)


option(COMPILE_EXECUTABLE "Whether to compile the executable" ON)

add_subdirectory(configured)
add_subdirectory(external)
add_subdirectory(src)
add_subdirectory(app)

# if(COMPILE_EXECUTABLE)
#     add_subdirectory(app)
# else()
#     message("compiling")
# endif()
