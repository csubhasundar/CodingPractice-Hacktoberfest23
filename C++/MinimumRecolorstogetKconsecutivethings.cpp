#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
   int minimumRecolors(string s, int k) {
        int i = 0 , j = 0 , n = s.length(), curr = 0 , ans = INT_MAX;

        while(j<n){
            if(s[j] == 'W'){
                curr++;
            }
            if((j-i+1) < k){
                j++;
            }
            else{
                ans = min(ans,curr);
                j++;
                if(s[i]=='W'){
                    curr--;
                }
                i++;
            }
        }
        return ans;   
    }
};

int main()
{

    Solution solution;
    string test = "WBWBBBW";
    int testing = 2;
    int result = solution.minimumRecolors(test,testing);
    cout<<result;
    cout<<endl;
    string test2 = "WBBWWBBWBW";
    int testing2 = 7;
    int result2 = solution.minimumRecolors(test2,testing2);
    cout<<result2;
    

    return 0;
}