#pragma once

namespace search {
    // Binary search algorithm implementation
    // to actually use this function, the array must be sorted
    // and the type T must support comparison operators (<, >, ==)
    // You can use this function like search::BinarySearch(arr, size, target);
    // or search::BinarySearch<int>(arr, size, target); for specific types.
    template <typename T>
    int BinarySearch(const T* arr, int size, const T& target);

}