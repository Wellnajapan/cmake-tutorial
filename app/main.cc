#include <iostream>
#include "cuslib.h"
#include "config.hpp"

int main()
{
    std::cout << project_name << '\n';
    std::cout << project_version << '\n';
    std::cout << git_sha << '\n';
    print_hello_world();
    return 0;
}
