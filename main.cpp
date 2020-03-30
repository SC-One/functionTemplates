#include<iostream>
#include<string_view>

template <char A='A',char Z='Z',typename Arg> bool isInAZ(Arg& thing);       // Note: changed place of typename Arg

int main()
{
    char h{'h'};
    std::cout<<isInAZ(h)<<std::endl;
    h++;
    std::cout<<isInAZ(h)<<std::endl;
    char H='H';
    std::cout<<isInAZ(H)<<std::endl;

    char j{'j'};
    std::cout<<isInAZ<'a','c'>(j)<<std::endl;             // now compiler is capable to compile it.
    char b{'b'};
    std::cout<<isInAZ<'a','c'>(b)<<std::endl;

    // it's better always do this job. to be able use that function better in Main()
    return 0;
}

template <char A,char Z,typename Arg> bool isInAZ(Arg& thing)       // Note: changed place of typename Arg
{
    if(thing>=A && thing<=Z)
        return true;
    else
        return false;
}
