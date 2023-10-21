//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG{
    public static void main(String args[])throws IOException
    {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while(t-- > 0){
            String str = in.readLine();
            Solution ob = new Solution();
            System.out.println(ob.palindromicPartition(str));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
    public static boolean isPalindrome(String s,int i,int j)
    {
        int st = i;
        int e = j;
        while(st < e)
        {
            if(s.charAt(st) != s.charAt(e))
            {
                return false;
            }
            st++;
            e--;
        }
        return true;
    }
    static int palindromicPartition(String s)
    {
        int n = s.length();
        int dp[][] = new int[n][n];
        for(int i=0;i<n;i++)
           dp[i][i] =0;
        for(int i = n-1;i>=0;i--)
        {
           for(int j = i+1;j<n;j++)
           {
               if(isPalindrome(s,i,j) == true)
               {
                   dp[i][j] = 0;
               }
               else{
                   int mini = Integer.MAX_VALUE;
                   for(int k=i;k<j;k++)
                   {
                     int cost = dp[i][k]+dp[k+1][j]+1;
                     mini = Integer.min(cost,mini);
                   }
                   dp[i][j] = mini;
               }
           }
        }
        return dp[0][n-1];
    }
}
