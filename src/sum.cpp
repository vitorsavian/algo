#include <iostream>

template <typename T>
void PrintArray(const T* const* arr) {
    if (arr == nullptr) {
        std::cout << "Array is null." << std::endl;
        return;
    }

    for (int i = 0; arr[i] != nullptr; ++i) {
        std::cout << *arr[i] << " ";
    }
    std::cout << std::endl;
}

template <typename T>
int sum(T *arr) {
    PrintArray(arr);
    return 1;
}