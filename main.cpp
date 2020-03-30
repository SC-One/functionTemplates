#include<iostream>
#include<string_view>
#include<string>

template <typename TReturn=double, typename TArg1, typename TArg2>TReturn largerThing(const TArg1& a, const TArg2& b)
{
    return a>b?a:b;
}

int main()
{
    std::cout<<largerThing(123,543)<<std::endl;
    return 0;
}
