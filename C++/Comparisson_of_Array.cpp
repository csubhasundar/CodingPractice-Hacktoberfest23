#include<iostream>
using namespace std;
int main(){
	int arr[5],temp,temp2,arr2[5];
		for(int i=0; i<5; i++){
		cout<<"Enter 1st"<<i+1<<" Number:";
		cin>>arr[i];
		cout<<"Enter 2nd array of"<<i+1<<" Number:";
		cin>>arr2[i];
		}
			
	for(int i=0; i<5; i++){
		for(int j=i+1; j<5; j++ ){
			if(arr[j]<arr[i]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			if(arr2[j]<arr2[i]){
				temp2=arr2[i];
				arr2[i]=arr2[j];
				arr2[j]=temp2;
			}
		}
		
	}
	cout<<"[";
	for(int j=0; j<5; j++ ){
		cout<<arr[j]<<",";		
}
	cout<<"]"<<endl;
		cout<<"[";
		for(int j=0; j<5; j++ ){
		cout<<arr2[j]<<",";
}
	cout<<"]\n";
		for(int j=0; j<5; j++ ){
		if(arr[j]!=arr2[j]){
			cout<<"Both Arrays are not Equal.";
			break;
		}
	if(j==4){
			cout<<"Both Arrays are  Equal.";
		}
		
		
		}
	}
