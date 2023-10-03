#include<iostream>
using namespace std;


void merge(int arr[], int l, int mid, int r){
    cout<<"inside merge\n";
    int ln = mid - l + 1;
    int rn = r - mid;
    int larr[ln], rarr[rn];

    for(int i=0;i<ln;i++){
        larr[i]=arr[i+l];
    }
    // cout<<"copied to larr\n";
    // printing larr
    cout<<"larr : ";
    for(int i=0;i<ln;i++){
        cout<<larr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<rn;i++){
        rarr[i]=arr[i+mid+1];
    }
    // cout<<"copied to rarr\n";
    // printing rarr
    cout<<"rarr : ";
    for(int i=0;i<rn;i++){
        cout<<rarr[i]<<" ";
    }
    cout<<endl;

    int i=0, j=0, k=l;
    // cout<<"initialized i,j,k\n";

    while(i<ln && j<rn){
        if(larr[i]<=rarr[j]){
            arr[k]=larr[i];
            // cout<<"added "<<larr[i]<<endl;
            i++;
        }
        else{
            arr[k]=rarr[j];
            // cout<<"added "<<rarr[j]<<endl;
            j++;
        }
            k++;
    }
    // cout<<"finished comparing larr and rarr and adding elements\n";

    while(i<ln){
        arr[k]=larr[i];
        // cout<<"added "<<larr[i]<<endl;
        i++;
        k++;
    }
    // cout<<"added larr extra components\n";

    while(j<rn){
        arr[k]=rarr[j];
        // cout<<"added "<<rarr[j]<<endl;
        j++;
        k++;
    }
    // cout<<"added rarr extra components\n\n";
    cout<<"finished merge\n";
    cout<<"arr : ";
    for(int a=l;a<k;a++){
        cout<<arr[a]<<" ";
    }
    cout<<endl<<endl<<endl<<endl;

}

void mergeSort(int arr[], int l,int r){
    // cout<<"inside merge sort\n";
    if(l<r){
        int mid = (l+r)/2;
        cout<<"mid = "<<mid<<endl;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}


int main(){
    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // cout<<"array elements alloted\n";

    mergeSort(arr,0,n-1);
    cout<<"Merge sort completed\n";

    cout<<"After sorting : \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}
