#include<iostream>
#include<string_view>
#include<string>
template <typename TArg, typename TReturn=TArg>TReturn largerThing(const TArg& a, const TArg& b)
{
    return a>b?a:b;
}

int main()
{
    std::cout<<largerThing(123,543)<<std::endl;
    return 0;
}
