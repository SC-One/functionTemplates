#include<iostream>
#include<string_view>

template <typename Arg,char A='A',char Z='Z'> bool isInAZ(Arg& thing)
{
    if(thing>=A && thing<=Z)
        return true;
    else
        return false;
}

int main()
{
    char h{'h'};
    std::cout<<isInAZ(h)<<std::endl;
    h++;
    std::cout<<isInAZ(h)<<std::endl;
    char H='H';
    std::cout<<isInAZ(H)<<std::endl;

//    char j{'j'};
//    std::cout<<isInAZ<'a','c'>(j)<<std::endl;             compiler is not capable to compile! next commit will correct it!
//    char b{'b'};
//    std::cout<<isInAZ<'a','c'>(b)<<std::endl;
    return 0;
}
