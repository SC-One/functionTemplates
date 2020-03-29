#include<iostream>
#include<string_view>
#include<string> // for comparing between string by (><!+= etc)
template<typename T,typename G> auto largerNumber(T a,G b)
{
    return a>b?a:b;
}
template<typename T> T largerNumber(T a,T b);
int main()
{
    int a{10},b{20};
    std::cout<<largerNumber(a,b)<<std::endl;
    std::cout<<largerNumber("ab","ba")<<std::endl;
    std::string str{"Hi Guy"}, txt{"Hi Bye"};       // G>B
    std::cout<<largerNumber(str,txt)<<std::endl;        // Now it will compile!
    str="23456";
    std::cout<<largerNumber(str,"12345")<<std::endl;
    std::cout<<largerNumber(str,"34567")<<std::endl;
    return 0;
}

template<typename T> T largerNumber(T a,T b)
{
    return a>b?a:b;
}

