#include <stdio.h>

int count_negative_numbers(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int array[] = {1, -2, 3, -4, 5, -6};
    int size = sizeof(array) / sizeof(array[0]);
    
    int negative_count = count_negative_numbers(array, size);
    printf("Total number of negative numbers: %d\n", negative_count);
    
    return 0;
}
