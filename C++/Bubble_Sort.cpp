#include<iostream>
using namespace std;

// To print the elements in the array.
void printArray(int arr[], int n) {
    
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  
}

// To perform bubble sort.
void bubbleSort(int arr[], int n) {

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n - i - 1; j++) {
        
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
 
  // Initializing an array to sort.
  int arr[5] = {36, 2, 45, 25, 18}; 

  // Length of the array.
  int n = sizeof(arr) / sizeof(arr[0]);

  // Printing the unsorted array.
  cout << "Unsorted Array - \n";
  printArray(arr, n);

  // Calling the sorting function.
  bubbleSort(arr, n);

  // Printing array after sorting.
  cout << "\nSorted Array - \n";
  printArray(arr, n);

  return 0;
}
