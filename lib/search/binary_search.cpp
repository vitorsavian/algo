#include "binary_search.hpp"
namespace search {

    template <typename T>
    int BinarySearch(const T *arr, int size, const T &target) {
        int left = 0;
        int right = size - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == target) {
                return mid; // Target found
            } else if (arr[mid] < target) {
                left = mid + 1; // Search in the right half
            } else {
                right = mid - 1; // Search in the left half
            }
        }
        return -1; // Target not found   
    }
    
}

int main(int argc, const char** argv) {
    return 0;
}