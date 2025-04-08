#include <iostream>

int main()
{
    int current_year, user_birth_year;

    std::cin >> current_year >> user_birth_year;

    if( current_year > user_birth_year )
    {
        std::cout << ( current_year - user_birth_year ); 
    }
    else
    {
        std::cout << "error" << std::endl;
    }
}