#include <cstdlib>

bool bernoulli( double p )
{
    double rnd = std::rand() / ( double ) RAND_MAX;

    return rnd <= p;
}