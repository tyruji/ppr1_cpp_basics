#include <cmath>


void fraction( double& integral, double& fractional, double fraction )
{
    integral = std::trunc( fraction );
    fractional = fraction - integral;
}




#include <iostream>

int main()
{
    double integral, fractional;

    fraction( integral, fractional, 3.14159 );

    std::cout << integral << " " << fractional << std::endl;
}