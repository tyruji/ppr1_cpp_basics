#include <cmath>
#include <iostream>

double geometric( double a_0, double q, int n )
{
    return a_0 * std::pow( q, n );
}