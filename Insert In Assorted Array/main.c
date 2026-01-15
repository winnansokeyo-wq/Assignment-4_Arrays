#include <stdio.h>

int main() {
    int arr[100]; // Defined with extra space for the insertion
    int size, i, value, pos;

    // 1. Input the initial size and elements
    printf("Input the size of array : ");
    scanf("%d", &size);

    printf("Input %d elements in the array :\n", size);
    for (i = 0; i < size; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // 2. Input the value and position to insert
    printf("Input the value to be inserted : ");
    scanf("%d", &value);
    printf("Input the Position, where the value to be inserted : ");
    scanf("%d", &pos);

    // Display current list
    printf("\nThe current list of the array : ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    /* 3. Shift elements to the right to make space
       We start from the back to avoid overwriting data */
    for (i = size; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // 4. Insert the value at the specific position
    // (Note: Using index pos-1 if the user considers position 1-based)
    arr[pos - 1] = value;
    size++; // Increase size

    // 5. Display the new list
    printf("\nAfter Insert the element the new list is : ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
