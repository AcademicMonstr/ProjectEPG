#include<iostream>

template <typename T>
void InputArr(T* arr, int32_t ArraySize);

template <typename T>
int32_t FindElement(T* arr,T elem, int32_t size);

template<>
int32_t FindElement<char>(char* arr,char elem, int32_t size);