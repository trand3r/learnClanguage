#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    int age;
    std::cout << "input age:" << std::endl;
    std::cin >> age;
    std::cout << "Age:" << age;
    return 0;
}