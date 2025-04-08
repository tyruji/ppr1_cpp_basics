#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{
    std::srand( std::time( nullptr ) );
    int a = 1 + std::rand() % 6;
    int b = 1 + std::rand() % 6;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << ( a + b ) << std::endl;
}