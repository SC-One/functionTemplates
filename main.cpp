#include<iostream>

template<typename T1,typename T2> auto largerNumber(T1 a, T2 b)->decltype (a>b?a:b)
{
    return a>b?a:b;
}
int main()
{
    std::cout<<largerNumber(1.2,2.4)<<std::endl;
    return 0;
}
