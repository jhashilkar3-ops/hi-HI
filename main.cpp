#include <iostream>
#include "src/hello.hpp"

int main()
{
    std::cout << "Comparing \"String one\" and \"string two\": "
              << strcmp_case_insensitive("banana", "APPLE") << std::endl;

    std::cout << "Comparing \"String one\" and \"string one\": "
              << strcmp_case_insensitive("HI", "hi") << std::endl;

    std::cout << "Comparing \"String two\" and \"string one\": "
              << strcmp_case_insensitive("Cat", "dog ") << std::endl;


    return 0;
}
