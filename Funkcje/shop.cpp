#include <iostream>

int main()
{
    int hour, minute;
    std::cin >> hour >> minute;

    int user_minutes = hour * 60 + minute;
    int min_minutes = 10 * 60 + 30;
    int max_minutes = 18 * 60 + 30;

    std::cout << std::boolalpha << ( user_minutes >= min_minutes && user_minutes < max_minutes ) << std::endl;

}