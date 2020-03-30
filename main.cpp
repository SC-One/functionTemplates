#include<iostream>
#include<string_view>
#include<vector>
#include<string>
///////////////////////////////////////////////////////// prototype
template<typename T> T largerCtr(T data[],size_t count);
template<typename T> T largerCtr(std::vector<T>& data);     // refrence pass , avoid from copying vector (expensive job)!
/////////////////////////////////////////////////////////

int main()
{
    std::vector<double> doubleCtr{12,42,43,24,10,100,103,74,78};
    long long llCtr[]{1029,9311,31212,47811,393178,781278,389289};
    size_t lengthLLCtr{sizeof (llCtr)/sizeof (llCtr[0])};
    std::vector<std::string> stringCtr{"first","second","third"};

    std::cout<<largerCtr(doubleCtr)<<std::endl;
    std::cout<<largerCtr(llCtr,lengthLLCtr)<<std::endl;
    std::cout<<largerCtr(stringCtr)<<std::endl;

    return 0;
}

template<typename T> T largerCtr(T data[],size_t count)
{
    if(count==1)    return data[0];
    size_t maxIndex{};
    for(size_t i{1};i<count;i++)
        if(data[i]>data[maxIndex])
            maxIndex=i;
    return data[maxIndex];
}
template<typename T> T largerCtr(std::vector<T>& data)
{
    T max{data.at(0)};
    for(auto &arr:data)
        if(arr>max)
            max=arr;
    return max;
}
