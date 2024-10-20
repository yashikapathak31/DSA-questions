#include <stdio.h>
#include <stdbool.h>

bool print_diamond(int rows) {
    
    if (rows % 2 == 0) {
        printf("Error: Number of rows must be odd.\n");
        return false;
    }

    int n = rows / 2; 

    
    for (int i = 0; i <= n; i++) {
       
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        
        for (int k = 0; k < (2 * i + 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (int i = n - 1; i >= 0; i--) {
        
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        
        for (int k = 0; k < (2 * i + 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return true;
}

int main() {
    int rows;

    
    printf("Enter the number of rows (odd number): ");
    scanf("%d", &rows);

    
    if (print_diamond(rows)) {
        printf("Diamond printed successfully.\n");
    }

    return 0;
}
