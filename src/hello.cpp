#include "hello.hpp"
#include <cctype>
using namespace std;
int strcmp_case_insensitive(const string& s1, const string& s2)
{
    size_t i = 0;

    while (i < s1.length() && i < s2.length())
    {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);

        if (c1 != c2)
        {
            return c1 - c2;
        }

        i++;
    }

    if (s1.length() == s2.length())
        return 0;
    else if (s1.length() < s2.length())
        return -1;
    else
        return 1;
}
