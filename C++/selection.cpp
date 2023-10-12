#include<iostream>
using namespace std;

//Worst case n^2
//Best case n
//not suitable for large data sets
//in place comparison algo
void selectionSort(int arr[],int n)
{
    for(int i=0;i<n-2;i++)
    {
        int min=i;
        for(int j=i+1;j<n-1;j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }
        if(min!=i)
            swap(arr[i],arr[min]);
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
    
    selectionSort(arr, n);
    print(arr,n);
    
    return 0;
}

