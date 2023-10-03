//given an array of integers , find two subsets such that difference of their sum is minimum

#include<bits/stdc++.h>
using namespace std;

vector<int> subsetsum(int a[],int sum,int n){
    bool dp[n+1][sum+1];
    for(int i=0;i<sum+1;i++) dp[0][i]=false;
    for(int i=0;i<n+1;i++) dp[i][0]=true;

    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(a[i-1]<=j){
                dp[i][j]=dp[i-1][j-a[i-1]] || dp[i-1][j];
            }else dp[i][j]=dp[i-1][j];
        }
    }

    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }


    //Top down table banaya for maximum sum (range)
    //nth row me each sum ka conditon diya hai
    //jinke liye true hai unko vector me push kr rahe hai
    //sum/2 tk kiye since hum s1 nikal rahe hai
    vector<int> v;
    for(int i=0;i<=sum/2;i++) if(dp[n][i]==true) v.push_back(i);
    return v;
}


int main(){
    int a[]={4,3,4,3,2};
    int n=sizeof(a)/sizeof(int);
    
    int range=0;
    for(int i=0;i<n;i++) range+=a[i]; // range nikale , summation a

    vector<int> subsum=subsetsum(a,range,n);// range me se wo valiues jinka sum can be obtained

    int ans=range+1; //max value for ans

    for(int i=0;i<subsum.size();i++){
        ans=min(abs(range-(2*subsum[i])),ans); //taking minimum difference |s1-s2| i.e. |range- 2*s1|
    }
    
    cout<<ans;
    
    return 0;
}
