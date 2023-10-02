public class BinarySearch {
    // Returns the index of x if it is present in arr[], else return -1
    int binarySearch(int arr[], int x) {
        int left = 0, right = arr.length - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Check if x is present at mid
            if (arr[mid] == x)
                return mid;

            // If x greater, ignore the left half
            if (arr[mid] < x)
                left = mid + 1;

            // If x is smaller, ignore the right half
            else
                right = mid - 1;
        }

        // if we reach here, then the element was not present
        return -1;
    }

    // Driver method 
    public static void main(String args[]) {
        BinarySearch ob = new BinarySearch();
        int arr[] = { 2, 3, 4, 10, 40 };
        int n = arr.length;
        int x = 10;
        int result = ob.binarySearch(arr, x);
        if (result == -1)
            System.out.println("Element not present in array");
        else
            System.out.println("Element found at index " + result);
    }
}
