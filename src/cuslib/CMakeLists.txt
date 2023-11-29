
add_library(${CUS_LIBRARY_NAME} STATIC cuslib.cc)
target_include_directories(${CUS_LIBRARY_NAME} PUBLIC "./")
