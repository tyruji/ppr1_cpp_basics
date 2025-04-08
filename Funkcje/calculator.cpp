#include <iostream>
#include <cmath>

struct BaseOperation
{
    double a, b;

    virtual void Execute() = 0;
    virtual ~BaseOperation() {};
    
    void ReadTwoValues()
    {
        std::cin >> a >> b;
    }
    void ReadOneValue()
    {
        std::cin >> a;
    }
};

struct Add : BaseOperation
{
    virtual void Execute()
    {
        ReadTwoValues();
        std::cout << ( a + b ) << std::endl;
    }
};

struct Sub : BaseOperation
{
    virtual void Execute()
    {   
        ReadTwoValues();
        std::cout << ( a - b ) << std::endl;
    }
};

struct Mul : BaseOperation
{
    virtual void Execute()
    {
        ReadTwoValues();
        std::cout << ( a * b ) << std::endl;        
    }
};

struct Div : BaseOperation
{
    virtual void Execute()
    {
        ReadTwoValues();
        std::cout << ( a / b ) << std::endl;
    }
};

struct SqrRt : BaseOperation
{
    virtual void Execute()
    {
        ReadOneValue();
        std::cout << std::sqrt( a ) << std::endl;
    }
};


int main()
{
    int operation;
    std::cin >> operation;

    BaseOperation* operations[] = { new Add(), new Sub(), new Mul(), new Div(), new SqrRt() };
    operations[ operation - 1 ]->Execute();
}