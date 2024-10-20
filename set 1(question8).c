#include <stdio.h>

void count_frequency(int arr[], int size) {
    int counted[size]; 
    int count, printed;

    printf("Number\tFrequency\n");
    for (int i = 0; i < size; i++) {
        count = 1; 
        printed = 0; 

        
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                printed = 1; 
                break;
            }
        }

        
        if (!printed) {
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }
            
            printf("%d\t%d\n", arr[i], count);
        }
    }
}

int main() {
    int array[] = {1, 2, 2, 3, 4, 5, 1, 6, 5};
    int size = sizeof(array) / sizeof(array[0]);

    count_frequency(array, size);

    return 0;
}
