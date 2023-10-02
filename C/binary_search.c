#include <stdio.h>
 
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if x is present at mid
        if (arr[m] == x)
            return m;
 
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
 
    // If we reach here, then element was not present
    return -1;
}
 
int binarySearchRecursive(int arr[], int l, int r,int x){
    if(l>r) return 0;
    int mid=l+(r-l)/2;
    if(arr[mid]==x){
        return mid;
    }
    if(arr[mid]>x){
        return binarySearchRecursive(arr,l,mid,x);
    }else{
         return binarySearchRecursive(arr,mid,r,x);
    }
}
// Driver code
int main(void)
{
    int arr[] = {1, 2, 3, 4, 10, 40,87,25 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    // int result = binarySearch(arr, 0, n - 1, x);
    int result = binarySearchRecursive(arr, 0, n - 1, x);
    (result == -1) ? printf("Element is not present"
                            " in array")
                   : printf("Element is present at "
                            "index %d",
                            result);
    return 0;
}