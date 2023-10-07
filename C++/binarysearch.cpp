#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Binary search function
int binarySearch(const vector<int>& arr, int key) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // If the key is found at the middle index, return its position
        if (arr[mid] == key) {
            return mid;
        }

        // If the key is smaller than the middle element, search the left half
        if (arr[mid] > key) {
            right = mid - 1;
        }
        // If the key is larger than the middle element, search the right half
        else {
            left = mid + 1;
        }
    }

    // Key not found in the array
    return -1;
}

int main() {
    int n;
    vector<int> arr;
	cout<<"Enter the size ";
	cin>>n;
	int k;
	for(int i=0;i<n;i++)
	{
		cin>>k;
	arr.push_back(k);
	}
    cout<<"Enter the element you want to search ";
	cin>>k;
	sort(arr.begin(), arr.end());

    int result = binarySearch(arr, k);

    if (result != -1) {
        cout << "Element " << k << " found at index after sorting the array in ascending order " << result << endl;
    } else {
        cout << "Element " << k << " not found in the array" << endl;
    }

    return 0;
}
