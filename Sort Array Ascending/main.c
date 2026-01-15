#include <stdio.h>

int main() {
    int n, i, j, temp;

    // 1. Input the size of the array
    printf("Input the size of array : ");
    scanf("%d", &n);

    int arr[n];

    // 2. Input elements into the array
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // 3. Sorting Logic (Bubble Sort)
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            // If the current element is greater than the next, swap them
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // 4. Output the sorted array
    printf("\nElements of array in sorted ascending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
