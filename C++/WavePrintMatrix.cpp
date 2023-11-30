#include <iostream>
#include <vector>

using namespace std;

void wavePrint(const vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int j = 0; j < cols; ++j) {
       
        if (j % 2 == 0) {
            for (int i = 0; i < rows; ++i) {
                cout << matrix[i][j] << " ";
            }
        } else {
           
            for (int i = rows - 1; i >= 0; --i) {
                cout << matrix[i][j] << " ";
            }
        }
    }
}

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "Wave print of the matrix:\n";
    wavePrint(matrix);

    return 0;
}
