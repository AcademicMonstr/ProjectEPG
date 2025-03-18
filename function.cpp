#include<iostream>
#include<cmath>

template <typename T>
void InputArr(T* arr, int32_t arraySize)
{
    for(int32_t i{}; i < arraySize; ++i)
    {
        std::cin >> arr[i];
    }
}


template <typename T>
int32_t FindElement(T* arr,T elem, int32_t size)
{
    int32_t position{-1};
    for(int32_t i{}; i < size; ++i)
    {
        if(arr[i] == elem)
        {
            position = ++i;
        }
    }
    return position;
}

bool isPrime(int32_t number)
{
    for (int32_t j{ 2 }; j * j <= number; ++j)
    {
        if (arr[i] % j == 0)
        {
            return false;
        }
    }
    return true;
}

int64_t SumAllPrimeInArray(int32_t *arr, int32_t arraySize)
{
    int64_t summ{};
    for (int32_t i{}; i < arraySize; ++i)
    {
        if (isPrime(arr[i]))
        {
            summ += arr[i];
        }
    }
    return summ;
}


template<typename T>
void bubleSort(T* arr, int32_t arraySize)
{
    arraySize--;
    for (int32_t i{}; i < arraySize; ++i) 
    {
        bool swapped { false };
        for (int32_t j{}; j < arraySize - i; ++j) 
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
