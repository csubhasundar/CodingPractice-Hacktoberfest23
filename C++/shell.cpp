#include<iostream>
using namespace std;

//Worst case n^2
//Best case n
//in place
//diminshing increment sort
//improved version of insetion sort as it allows the exchange of far items and less movement is involved 
void shellSort(int arr[],int n)
{
    int gap,i,temp,j;
    for(gap=n/2;gap>=1;gap/=2)
    {
        for(i=gap;i<n;i++)
        {
            temp=arr[i];
            j=i;
            while(j>=gap && arr[j-gap]>temp)
            {
                arr[j]=arr[j-gap];
                j=j-gap;
            }
            arr[j]=temp;
        }
    }
    
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    shellSort(arr, n);
    print(arr,n);
    
    return 0;
}

