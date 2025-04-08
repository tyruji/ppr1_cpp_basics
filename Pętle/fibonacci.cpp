#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int fib_1 = 0, fib_2 = 1;

    while( n-- )
    {
        fib_2 += fib_1;
        std::cout << fib_2 << std::endl;
        fib_1 = fib_2 - fib_1;
    }
}