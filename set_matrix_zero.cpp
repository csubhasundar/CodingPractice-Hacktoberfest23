// C++ code for the above approach:
#include <bits/stdc++.h>
using namespace std;

void SetMatrixZeroes(vector<vector<int> >& arr)
{

	// Traverse the matrix
	// using 2 nested loops
	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[0].size(); j++) {

			// If the cell contains zero
			// then mark its row
			// and column zero

			if (arr[i][j] == 0) {

				// Marking ith row
				// elements zero
				for (int c = 0; c < arr[i].size(); c++) {
					if (arr[i]) {
						arr[i] = -1;
					}
				}

				// Marking jth column
				// elements zero
				for (int r = 0; r < arr.size(); r++) {
					if (arr[r][j]) {
						arr[r][j] = -1;
					}
				}
			}
		}
	}
	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[0].size(); j++) {
			if (arr[i][j] == -1)
				arr[i][j] = 0;
		}
	}
}

// Driver code
int main()
{
	vector<vector<int> > arr = { { 0, 1, 2, 0 },
								{ 3, 4, 5, 2 },
								{ 1, 3, 1, 5 } };

	// Function call
	SetMatrixZeroes(arr);
	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[0].size(); j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
