#include <stdio.h>

int main() {
    int n, i, j, count;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The unique elements found in the array are: ");

    // Logic to find unique elements
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            // Check if the element at i matches any other element in the array
            if (i != j && arr[i] == arr[j]) {
                count++;
                break; // If a match is found, it's not unique
            }
        }

        // If count remains 0, the element is unique
        if (count == 0) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
    return 0;
}
