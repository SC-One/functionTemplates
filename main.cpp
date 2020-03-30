#include<iostream>
template <typename TReturn, typename TArg1, typename TArg2> TReturn larger(TArg1 a, TArg2 b)
{
    return a > b ? a : b;
}

int main()
{
    std::cout<<larger<double>(1.5,2.7)<<std::endl;
    std::cout<<larger<double,size_t>(2.5,2.7)<<std::endl;
    std::cout<<larger<double,size_t,size_t>(1.5,2.7)<<std::endl;
    return 0;
}
