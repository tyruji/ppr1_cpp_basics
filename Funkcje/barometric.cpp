#include <iostream>
#include <cmath>

const double R = 8.3144598;
const double myu_g = 0.0289644 * 9.80665;
const double p_0 = 1013.25;

int main()
{
    double pressure, temperature;

    std::cin >> pressure >> temperature;

    double height = -R * temperature / myu_g;
    height *= std::log( pressure / p_0 );

    std::cout << height << std::endl;
}
