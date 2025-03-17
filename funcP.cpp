#include <iostream>

void removeNegativeNumbers(int arr[], int& size) {
    int j = 0;
    // положительные числа в начало 
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            arr[j] = arr[i];
            j++;
        }
    }

    // оставшиеся  ндексы в нули 
    for (int i = j; i < size; i++) {
        arr[i] = 0;
    }
}

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // меняем местами элементы
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int MaxElement(int arr[], int size) {
    int maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int MinElement(int arr[], int size) {
    int minIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}