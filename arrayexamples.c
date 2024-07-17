#include <stdio.h>

int main() {
    int n;

    // Input the size of the array
    printf("What size of array do you want: ");
    scanf("%d", &n);

    // Declare the array after n has been initialized
    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize flags to check if the array is sorted
    int isIncreasing = 1;
    int isDecreasing = 1;

    // Check if the array is sorted in increasing order
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isIncreasing = 0;
            break;
        }
    }

    // Check if the array is sorted in decreasing order
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            isDecreasing = 0;
            break;
        }
    }

    // Output the result
    if (isIncreasing) {
        printf("The array is sorted in increasing order.\n");
    } else if (isDecreasing) {
        printf("The array is sorted in decreasing order.\n");
    } else {
        printf("The array is not sorted.\n");
    }

    return 0;
}
