#include <stdio.h>

int count_duplicates(int arr[], int size) {
    int count = 0;
    int counted[size]; 
    int printed;

    for (int i = 0; i < size; i++) {
        printed = 0; 

        
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                printed = 1; 
                break;
            }
        }

        
        if (!printed) {
            int occurrences = 0;
            for (int j = 0; j < size; j++) {
                if (arr[i] == arr[j]) {
                    occurrences++;
                }
            }
            
            if (occurrences > 1) {
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    int array[] = {1, 2, 2, 3, 4, 5, 1, 6, 5};
    int size = sizeof(array) / sizeof(array[0]);

    int duplicate_count = count_duplicates(array, size);
    printf("Total number of duplicate numbers: %d\n", duplicate_count);

    return 0;
}
