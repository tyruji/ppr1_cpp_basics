#include <iostream>

int main()
{
    double mass, height;
    std::cin >> mass >> height;
    height /= 100;
    double bmi = mass / ( height * height );
    
    if( bmi > 30 )
    {
        std::cout << "obese" << std::endl;
    }
    else if( bmi > 25 )
    {
        std::cout << "overweight" << std::endl;
    }
    else if( bmi >= 18.5 )
    {
        std::cout << "normal" << std::endl;
    }
    else
    {
        std::cout << "underweight" << std::endl;
    }
}