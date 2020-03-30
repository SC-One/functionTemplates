#include<iostream>
#include<string_view>
#include<string> // for comparing between string by (><!+= etc)
template<typename T> T largerNumber(T a,T b);
int main()
{
    int a{10},b{20};
    std::cout<<largerNumber<double>(a,19.9)<<std::endl;
    std::cout<<largerNumber<double>(19.9,b)<<std::endl;
    return 0;
}

template<typename T> T largerNumber(T a,T b)
{
    return a>b?a:b;
}

