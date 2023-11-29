set(CUSLIB_SOURCES "cuslib.cc")
set(CUSLIB_HEADERS "cuslib.h")

add_library(${CUS_LIBRARY_NAME} STATIC
    ${CUSLIB_SOURCES}
    ${CUSLIB_HEADERS}
)

target_include_directories(
    ${CUS_LIBRARY_NAME} PUBLIC
    "./"
    "${CMAKE_BINARY_DIR}/configured_files/include"
)
