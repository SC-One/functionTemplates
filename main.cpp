#include<iostream>
template <size_t N,typename T>  T averageArr(const T (&arr)[N]);          // pass fixed size array (N elements of arr)
int main()
{
    double doubles[2] { 1.0, 2.0 };
    std::cout<<averageArr(doubles)<<std::endl;
    double moreDoubles[] { 1.0, 2.0, 3.0, 4.0 };
    std::cout<<averageArr(moreDoubles)<<std::endl;
    std::cout << averageArr( { 1.0, 2.0, 3.0, 4.0 } ) << std::endl;
    int ints[] = { 1, 2, 3, 4 };
    std::cout << averageArr(ints) << std::endl;
    return 0;
}

template <size_t N,typename T>  T averageArr(const T (&arr)[N])
{
    T sum{};
    for(size_t i{};i<N;++i)
        sum+=arr[i];
    return sum/N;
}
