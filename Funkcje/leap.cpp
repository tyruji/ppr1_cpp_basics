#include <iostream>

int main()
{
    int year;
    std::cin >> year;

    std::cout << std::boolalpha << ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ) << std::endl;
}