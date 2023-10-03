#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//finds the index of the character which if removed makes the string a palindrome
int main()
{
    string s="racecqar";
    for(int i=0;i<s.length();i++)
    {
        string s2="";
        int count=0;
        for(int j=0;j<s.length();j++)
        {
            if(j!=i) 
            {
                s2.insert(s2.end(),s[j]);
            }
        }
        cout<<s2<<" ";
        for(int k=0;k<s2.length();k++)
        {
            if(s2[k]!=s2[s2.length()-k-1])
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            cout<<i;
            break;
        }
        else
            cout<<"Not"<<endl;
    }    
    return 0;
}