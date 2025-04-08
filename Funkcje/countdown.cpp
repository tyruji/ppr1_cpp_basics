#include <iostream>

const char* number_names[] = { "start", "zero", "one", "two", "three", "four", 
    "five", "six", "seven", "eight", "nine", "ten", "stop" };

bool countdown( int num )
{
    std::cout << number_names[ num-- ] << std::endl;

    return ( num <= 10 && num >= 0 ) && countdown( num );
}

int main()
{
    int num;
    std::cin >> num;

    bool a = !( ( num <= 10 && num >= 0 ) || countdown( 12 ) ) || countdown( num + 1 );
}