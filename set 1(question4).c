#include <stdio.h>

int main() {
    int numbers[7];
    int temp;

    
    printf("Enter 7 integers:\n");
    for (int i = 0; i < 7; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    
    for (int i = 0; i < 7 / 2; i++) {
        temp = numbers[i];
        numbers[i] = numbers[7 - 1 - i];
        numbers[7 - 1 - i] = temp;
    }

    
    printf("Reversed order of numbers: ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
