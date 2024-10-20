#include <stdio.h>

void print_pattern(int rows) {
    for (int i = 0; i < rows; i++) {
        
        for (int j = 1; j <= rows; j++) {
            if (j <= i) {
                printf("5");  
            } else {
                printf("%d", j + i); 
            }
        }
        
        printf("\n");
    }
}

int main() {
    int rows;

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    
    print_pattern(rows);

    return 0;
}
