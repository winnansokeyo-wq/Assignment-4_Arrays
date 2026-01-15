#include <stdio.h>
#define BUFFER_SIZE 10

int buffer[BUFFER_SIZE];
int head = 0;        // points to next write location
int count = 0;       // how many values have been inserted total (up to BUFFER_SIZE)

// Insert a new sensor sample
void insert_sample(int value) {
    buffer[head] = value;
    head = (head + 1) % BUFFER_SIZE;   // circular increment
    if (count < BUFFER_SIZE) {
        count++;
    }
}

// Print in chronological order (oldest -> newest)
void print_samples() {
    if (count == 0) {
        printf("No samples stored yet.\n");
        return;
    }

    int start = (head - count + BUFFER_SIZE) % BUFFER_SIZE;

    printf("Stored samples (oldest -> newest): ");
    for (int i = 0; i < count; i++) {
        int index = (start + i) % BUFFER_SIZE;
        printf("%d ", buffer[index]);
    }
    printf("\n");
}

int main() {
    int value;

    while (1) {
        printf("\nEnter sensor value (negative to print & exit): ");
        scanf("%d", &value);

        if (value < 0) {
            printf("\nFinal buffer state:\n");
            print_samples();
            break;
        }
        insert_sample(value);
        print_samples();
    }
    return 0;
}
