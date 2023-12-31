
#include <bits/stdc++.h>

using namespace std;


  string longestPalindrome(string s) {
        int n=s.length();
        vector<vector<bool>>dp(n, vector<bool>(n));
        
        for(int i=n-1;i>=0;i--)
        {
            for(int j=i;j<n;j++)
            {
                if(i==j)
                {
                    dp[i][j] = true;
                }
                else if(s[i]==s[j])
                {
                    dp[i][j] = (i+1<j-1)?dp[i+1][j-1]:true;
                }
                else
                    dp[i][j] =0;
            }
        }
         int maxx = 0;
        int ind = -1;
        int jnd = -1;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(dp[i][j] && (j-i+1)>maxx)
                    {
                    maxx = j-i+1;
                    ind = i;
                    jnd = j;
                }
            }
        }
        
        //cout<<ind<<" "<<jnd<<endl;
        //return "";
        return string(s.begin()+ind, s.begin()+jnd+1);
    

    }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string ans = longestPalindrome(s);
        cout<<ans<<endl;
    }
    return 0;
}
