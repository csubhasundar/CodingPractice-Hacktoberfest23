#include <bits/stdc++.h>
using namespace std;

   // To count distinct subsequences of string 't' in string 's' 
   long long distinct_subsequence(int x, int y, string &s, string &t, vector<vector<int>>& dp)
    {
        // If we have  matched all characters in 't', return 1 as we have found a distinct subsequence.
        if(y == t.size())
        {
            return 1;
        }
        // If we have reached the end of string 's' but not yet matched all characters in 't', return 0.
        if(x == s.size())
        {
            return 0;
        }
        // returning the memoized value if already calculated
        if(dp[x][y] != -1)
        {
            return dp[x][y];
        }
        // If character matches then either continue or look for another occurrence of it in 's'
        if(s[x] == t[y])
        {
           long long a = distinct_subsequence(x + 1, y + 1, s, t, dp);
           long long b = distinct_subsequence(x + 1, y, s, t, dp);
           return dp[x][y] = a + b;
        }
        return dp[x][y] = distinct_subsequence(x + 1, y, s, t, dp) + 0;
    }
    
    int main() {
        string s = "baggbag";
        string t = "bag";
        long long x = s.size();
        long long y = t.size();
        // Initializing a memoization table 
        vector<vector<int>> dp(x, vector<int>(y, -1));
        cout << distinct_subsequence(0, 0, s, t, dp) << endl;
        return 0;
    }
