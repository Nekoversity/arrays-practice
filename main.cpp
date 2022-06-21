#include <iostream>
#include <array>
#include <algorithm>

void printArray(std::array<int,5> arr, char delim = ' ') {
    for (const int &el : arr) std::cout << el << delim;
}

int main()
{
    std::array<int, 5> arr { 8, 4, 2, 7, 1 };

    // Ascending sort
    std::sort(arr.begin(), arr.end());
    printArray(arr);

    std::cout << std::endl;

    // Descending sort
    std::sort(arr.rbegin(), arr.rend());
    printArray(arr);

    return 0;
}