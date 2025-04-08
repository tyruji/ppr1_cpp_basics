#include <vector>

std::vector<int> intersection( const std::vector<int> vec1, const std::vector<int> vec2 )
{
    int i_1 = 0, i_2 = 0;
    std::vector<int> result;

    while( i_1 < vec1.size() && i_2 < vec2.size() )
    {
        const int n_1 = vec1[ i_1 ];
        int n_2 = vec2[ i_2 ];

        if( n_1 == n_2 )
        {
            result.push_back( n_1 );
            ++i_1;
            ++i_2;
        }
        else if( n_1 > n_2 )
        {
            ++i_2;
        }
        else ++i_1;
    }

    return result;
}



#include <iostream>

int main() 
{
    const std::vector<int> vector1 { -7, 2, 3, 7, 15, 18, 23 },
        vector2 { -8, 3, 5, 8, 15, 23, 30 };

    std::vector<int> result = intersection( vector1, vector2 );
    
    for ( int element: result ) 
    {
        std::cout << element << " "; 
    }

    std::cout << std::endl; 
}