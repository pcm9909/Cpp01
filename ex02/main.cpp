#include <iostream>

int main()
{
    std::string str("HI THIS IS BRAIN");
    std::string *ptr(&str);
    std::string &ref(str);

    std::cout << "Addr" << std::endl;
    std::cout << &str << std::endl;
    std::cout << ptr << std::endl;
    std::cout << &ref << std::endl;

    std::cout << "Value" << std::endl;
    std::cout << str << std::endl;
    std::cout << *ptr << std::endl;
    std::cout << ref << std::endl;
}