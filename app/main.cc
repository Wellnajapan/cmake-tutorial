#include <iostream>
#include "cuslib.h"
#include "config.hpp"
#include <nlohmann/json.hpp>
// #include <httplib/httplib.h>

int main()
{
    std::cout << project_name << '\n';
    std::cout << project_version << '\n';
    std::cout << git_sha << '\n';

    std::cout << "JSON: " << NLOHMANN_JSON_VERSION_MAJOR << "."
              << NLOHMANN_JSON_VERSION_MINOR << "."
              << NLOHMANN_JSON_VERSION_PATCH << '\n';
    print_hello_world();
    return 0;
}
