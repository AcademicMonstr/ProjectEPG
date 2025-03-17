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

int64_t SumAllPrimeInArray(int32_t *arr, int32_t ArraySize)
{
    bool isPrime{ true };
    int64_t summ{};
    for (int32_t i{}; i < ArraySize; ++i)
    {
        for (int32_t j{ 2 }; j * j <= arr[i]; ++j)
        {
            if (arr[i] % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (arr[i] > 1 && isPrime)
        {
            summ += arr[i];
        }
        isPrime = true;
    }
    return summ;
}

template<typename T>
void bubleSort(T* arr, int32_t ArraySize)
{
    ArraySize--;
    for (int32_t i{}; i < ArraySize; ++i) 
    {
        bool swapped { false };
        for (int32_t j{}; j < ArraySize - i; ++j) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) 
        {
            break;
        }
    }

}
