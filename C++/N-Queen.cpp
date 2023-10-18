#include <iostream>
#include <vector>
using namespace std;


/*

Problem Description
The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

Given an integer n, return all distinct solutions to the n-queens puzzle. You may return the answer in any order.

Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.

Example
Input: n = 4
Output: [.Q.. ...Q Q... ..Q. ][..Q. Q... ...Q .Q.. ]

*/

class Solution {
public:

	bool isSafe(int i,int j,vector<string> &board){
		int row = i, col = j;
		//top-left diagonal
		while(row>=0&&col>=0){
			if(board[row][col]=='Q')	return false;
			row--;
			col--;
		}

		row = i, col = j;
		//upwards
		while(row>=0){
			if(board[row][col]=='Q')	return false;
			row--;
		}

		row = i;
		//top right
		while(row>=0&&col<board.size()){
			if(board[row][col]=='Q')	return false;
			col++;
			row--;
		} 
		return true;
	}


	void help(int row, int n, vector<string>& board, vector< vector<string>>& ans){
		if(row==n){
			ans.push_back(board);
			return;
		}
		for(int col=0;col<n;col++){
			if(isSafe(row,col,board)){
				board[row][col] = 'Q';
				help(row+1,n,board,ans);
				board[row][col] = '.';
			}
		}
	}

	vector<vector<string>> solveNQueens(int n) {
		vector<vector<string>> ans;
		string temp;
		for(int i=0;i<n;i++){
			temp+=".";
		}
		vector<string> board(n,temp);
		help(0,n,board,ans);
		return ans;
	}
};


int main(){
    Solution obj;
    int n;
    cin>>n;
    vector<vector<string>> arr = obj.solveNQueens(n);

    for (auto ar : arr) {
        cout << "[";
        for (auto it : ar)
            cout << it << " ";
        cout << "]";
    }
}

