#include <string>
#include <iostream>
#include <iomanip>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "String Address\t:" << &str << std::endl;
    std::cout << "strPTR\t\t:" << stringPTR << std::endl;
    std::cout << "strREF\t\t:" << &stringREF << std::endl;

    std::cout << "String value\t\t:" << str << std::endl;
    std::cout << "strPTR points to\t:" << *stringPTR << std::endl;
    std::cout << "strREF points to\t:" << stringREF << std::endl;
}