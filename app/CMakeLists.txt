set(APP_SOURCES
    "main.cc"
)

add_executable(
    ${APP_EXECUTABLE_NAME}
    ${APP_SOURCES}
)

target_link_libraries(
    ${APP_EXECUTABLE_NAME}
    PUBLIC
    ${CUS_LIBRARY_NAME}
    nlohmann_json
    httplib
)
