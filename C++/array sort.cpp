#include <iostream>

using namespace std;

void sortArray(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] > arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main() {
  int arr[] = {5, 3, 2, 1, 4};
  int size = sizeof(arr) / sizeof(arr[0]);

  sortArray(arr, size);

  cout << "Sorted array: ";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
