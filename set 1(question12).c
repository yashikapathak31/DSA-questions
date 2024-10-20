#include <stdio.h>

void print_half_diamond(int columns) {
    
    for (int i = 1; i <= columns; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
   
    for (int i = columns - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int columns;

  
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    
    print_half_diamond(columns);

    return 0;
}
