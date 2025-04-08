#include <iostream>

int main()
{
    bool first_input = true;
    double n, min = 0;

    while( std::cin >> n )
    {
        if( n >= min && !first_input ) continue;
        min = n;
        first_input = false;
    }

    if( first_input ) return 0;

    std::cout << min << std::endl;
}