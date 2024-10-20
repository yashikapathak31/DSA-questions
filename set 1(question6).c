#include <stdio.h>

int main() {
    int numbers[10]; 
    int searchNumber, index = -1;

   
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    
    printf("Enter the number to search: ");
    scanf("%d", &searchNumber);

    
    for (int i = 0; i < 10; i++) {
        if (numbers[i] == searchNumber) {
            index = i; 
            break; 
        }
    }

    
    if (index != -1) {
        printf("The first occurrence of %d is at index: %d\n", searchNumber, index);
    } else {
        printf("%d is not present in the array.\n", searchNumber);
    }

    return 0;
}
