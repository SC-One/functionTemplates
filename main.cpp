#include<iostream>
#include<string_view>
#include<string>

//template<typename T1,typename T2> auto largerNumber(T1 a, T2 b)->decltype (a>b?a:b)
//{
//    return a>b?a:b;
//}
///////////////////////////////////////// instead above function:
template <typename T1,typename T2>  decltype (auto) largerNumber(T1 a,T2 b)
{
    return a>b?a:b;
}
// with this decltype(auto) you have easy way to dont write again expressions!
// decltype(auto) syntax add in C++ 14


int main()
{
    std::cout<<largerNumber(1.2,2.4)<<std::endl;
    std::cout<<largerNumber<std::string,std::string_view>("Hey",largerNumber<std::string_view>("Bey","Cey"))<<std::endl;
    return 0;
}
