import java.util.*;


class bubblesort {
    public static void main(String[] args) {
        int arr[]={1,5,7,2,3};
        int n=arr.length;
        for (int i = 0; i < n; i++) {
            for(int j=0;j<n-1-i;j++){
                if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                }
            }
        }
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
    }
}
