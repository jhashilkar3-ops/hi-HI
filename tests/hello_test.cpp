#include "hello.hpp"
#include <iostream>
#include <cassert>
int main()
{

    assert(strcmp_case_insensitive("Hi", "hi") == 0);
    assert(strcmp_case_insensitive("banana", "apple") > 0);
    assert(strcmp_case_insensitive("cat", "Dog") < 0);

    std::cout << "All tests passed successfully!" << std::endl;

    return 0;
}
