#include<iostream>
#include<string> // for comparing between string by (><!+= etc)
template<typename T> T largerNumber(T a,T b);
int main()
{
    int a{10},b{20};
    std::cout<<largerNumber(a,b)<<std::endl;
    std::cout<<largerNumber("ab","ba")<<std::endl;
    std::string str{"Hi Guy"}, txt{"Hi Bye"};       // G>B
    std::cout<<largerNumber(str,txt)<<std::endl;
    //    std::cout<<largerNumber(str,"Hi Bye")<<std::endl;       //  wont compile ,in next exmaple doing it.
    return 0;
}

template<typename T> T largerNumber(T a,T b)
{
    return a>b?a:b;
}
