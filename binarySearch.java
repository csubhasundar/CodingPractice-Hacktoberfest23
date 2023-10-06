import java.util.Scanner;

public class binarySearch {


    
    public static int binarySearchFunction(int numbers[],int key){
        int start = 0, end = numbers.length -1;

        while(start <= end){
            int mid = (start + end) / 2;

            // comparisons 
            if(numbers[mid] == key){  // element  found 
                return mid;
            }
            if(numbers[mid] < key){  // element is on right side 
                start = mid + 1;
            } else {  // element is on left side 
                end = mid - 1;
            }
        }
        return -1;

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        // prerequisite -> sorted arrays

       

        int numbers[] = {2,4,6,8,10,12,14};
        int key = 14;

        System.out.println("Index for key is : " + binarySearchFunction(numbers, key));

        sc.close();
    }
}


