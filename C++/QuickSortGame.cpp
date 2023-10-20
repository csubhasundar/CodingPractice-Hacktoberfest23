#include <iostream>
#include <vector>
#include <algorithm>

// Function to perform Quick Sort
void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;
        
        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                std::swap(arr[i], arr[j]);
            }
        }
        
        std::swap(arr[i + 1], arr[high]);
        
        quickSort(arr, low, i);
        quickSort(arr, i + 2, high);
    }
}

int main() {
    std::vector<int> numbers;
    int n;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }

    int arraySize = numbers.size();

    std::cout << "Unsorted Array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    quickSort(numbers, 0, arraySize - 1);

    std::cout << "Sorted Array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
