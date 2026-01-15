#include <stdio.h>

int main() {
    int arr[100];
    int n, i, sum = 0;

    // Input the number of elements to be stored in the array
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    // Input elements in the array
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of all elements
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Output the final result
    printf("Sum of all elements stored in the array is : %d\n", sum);

    return 0;
}
