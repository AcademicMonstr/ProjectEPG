#include<iostream>
#include<cmath>

template <typename T>
void InputArr(T* arr, int32_t ArraySize)
{
    for(int32_t i{}; i < ArraySize; ++i)
    {
        std::cin >> arr[i];
    }
}


template <typename T>
int32_t FindElement(T* arr,T elem, int32_t size)
{
    int32_t temp{-1};
    for(int32_t i{}; i < size; ++i)
    {
        if(arr[i] == elem)
        {
            temp = ++i;
        }
    }
    return temp;
}