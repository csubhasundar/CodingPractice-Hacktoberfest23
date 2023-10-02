
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r) {
		int m = l + (r - l) / 2;

		if (arr[m] == x)
			return m;

		if (arr[m] < x)
			l = m + 1;

		else
			r = m - 1;
	}


	return -1;
}


int main()
{
    int x;
    cout<<"Enter size of array ";
	cin>>x;
    int arr[x];
    
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

	int key;
    cout<<"enter key ";
    cin>>key;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, key);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}
