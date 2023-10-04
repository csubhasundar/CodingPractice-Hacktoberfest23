#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	int count[256]={0};
	
	if(s1.length() != s2.length())
	{
		cout<<"no";//use flags here
		
	}
	for(int i =0;i<s1.length();i++)
	{
		count[s1[i]]++;
	}
	for(int i =0;i<s2.length();i++)
	{
		count[s2[i]]--;
	}
	for(int i =0 ;i<256;i++)
	{
		if(count[i] !=0)
		{
			cout<<"no";
			
		}
	}
	cout<<"true";
}
