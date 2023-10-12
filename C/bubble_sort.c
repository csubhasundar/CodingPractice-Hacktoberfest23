#include <stdio.h>

int main() {
    int n, i, j, temp;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int a[n];  // Declare an array of size 'n'.

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Optimized Bubble Sort
    for (i = 0; i < n - 1; i++) {
        int swapped = 0;  // Flag to check if any swaps are made in this pass.

        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Swap a[j] and a[j+1]
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = 1;  // Set the flag to 1, indicating a swap was made.
            }
        }

        // If no swaps are made in a pass, the array is already sorted.
        if (swapped == 0)
            break;
    }

    printf("Array after sorting:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
