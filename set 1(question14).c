#include <stdio.h>

void print_pattern(int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) {
            
            for (int j = 1; j <= columns; j++) {
                printf("%d", j);
            }
        } else {
            
            for (int j = columns; j >= 1; j--) {
                printf("%d", j);
            }
        }
        
        printf("\n");
    }
}

int main() {
    int rows, columns;

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    
    print_pattern(rows, columns);

    return 0;
}
