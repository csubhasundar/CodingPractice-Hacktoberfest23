package Linkedlist_Codestudio;

public class MaxSubarrSum {
    public static void main(String[] args) {
        int[] arr={1,2,3,4};
        int n=arr.length;

        int maxsum=arr[0];
        int currsum=arr[0];

        for (int i = 1; i < n; i++) {

            currsum=Math.max(arr[i],currsum+arr[i]);
            maxsum=Math.max(maxsum,currsum);



        }

        return amz



    }
}
