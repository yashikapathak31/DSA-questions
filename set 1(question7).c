#include <stdio.h>

void print_unique_numbers(int arr[], int size) {
    int count, is_unique;

    printf("Unique numbers in the array: ");
    for (int i = 0; i < size; i++) {
        count = 0;
        is_unique = 1;

        
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                is_unique = 0;
                break;
            }
        }

        
        if (count == 1 && is_unique) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int array[] = {1, 2, 3, 2, 4, 5, 1, 6};
    int size = sizeof(array) / sizeof(array[0]);

    print_unique_numbers(array, size);

    return 0;
}
