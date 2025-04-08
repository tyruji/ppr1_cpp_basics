#include <iostream>
#include <vector>
#include <utility>

void print_vec( std::vector<int> vec )
{
    for( int element : vec )
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

void selection_sort( std::vector<int> vec, int start_idx = 0 )
{
    if( start_idx >= vec.size() ) return;

    int min_idx = start_idx;
    for( int i = start_idx; i < vec.size(); ++i )
    {
        if( vec[ i ] >= vec[ min_idx ] ) continue;
        min_idx = i;
    }

    std::swap( vec[ min_idx ], vec[ start_idx ] );
    print_vec( vec );
    selection_sort( vec, start_idx + 1 );
}

int main()
{
    std::vector<int> vec;
    int n;

    while( std::cin >> n )
    {
        vec.push_back( n );
    }

    selection_sort( vec );
}