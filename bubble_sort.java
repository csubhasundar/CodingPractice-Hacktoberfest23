// // Bubble Sort Algorithm is the simplest sorting algorithm that works by repeatedly swapping
// //  the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data
// //   sets as its average and worst-case time complexity is quite high.

// Bubble Sort Example
// Consider an array to be mentioned below:

// arr[] = {5, 1, 4, 2, 8}
// First Traversing 
// Bubble sort starts with very first two elements, comparing them to check which one is greater.

// ( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1. 
// ( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ), Swap since 5 > 4 
// ( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 ), Swap since 5 > 2 
// ( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.
// Second Traversing
// Now, during second iteration it should look like this:

// ( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ) 
// ( 1 4 2 5 8 ) –> ( 1 2 4 5 8 ), Swap since 4 > 2 
// ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
// ( 1 2 4 5 8 ) –>  ( 1 2 4 5 8 ) 

// Third Traversing
// Now, the array is already sorted, but our algorithm does not know if it is completed.

// The algorithm needs one whole pass without any swap to know it is sorted.

// ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
// ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
// ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
// ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
// Output:
// // Sorted
// arr=[1,2,4,5,8]
#include <iostream>
using namespace std;

// Function to perform bubble sort on an integer array
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Function to print an integer array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    const int N = sizeof(arr) / sizeof(arr[0]);

    // Sort the array using bubble sort
    bubbleSort(arr, N);

    cout << "Sorted array: \n";
    printArray(arr, N);

    return 0;
}
