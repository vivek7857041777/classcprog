#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, in, val;
    int *arr;

    // Input size of the array
    printf("Enter the size of array n = ");
    scanf("%d", &n);

    // Allocate memory for the array
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display original array
    printf("Original array: ");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    // Insertion part
    printf("Enter the index where you want to insert: ");
    scanf("%d", &in);

    // Reallocate memory to accommodate one extra element
    arr = (int *)realloc(arr, (n + 1) * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Shift elements to the right
    for (int k = n; k > in; k--) {
        arr[k] = arr[k - 1];
    }

    // Input value to insert
    printf("Enter the value to insert: ");
    scanf("%d", &val);
    arr[in] = val;

    // Increment size
    n++;

    // Display array after insertion
    printf("Array after insertion: ");
    for (int l = 0; l < n; l++) {
        printf("%d ", arr[l]);
    }
    printf("\n");

    // Deletion part
    printf("Enter the index to delete: ");
    scanf("%d", &in);

    // Shift elements to the left
    for (int m = in; m < n - 1; m++) {
        arr[m] = arr[m + 1];
    }

    // Decrement size
    n--;

    // Display array after deletion
    printf("Array after deletion: ");
    for (int r = 0; r < n; r++) {
        printf("%d ", arr[r]);
    }
    printf("\n");

    // Free allocated memory
    free(arr);
    return 0;
}
