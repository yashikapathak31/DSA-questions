#include <stdio.h>

void print_pattern(int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            
            if (i == 0 || i == rows - 1 || j == 0 || j == columns - 1) {
                printf("1");
            } else {
                printf("0");
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
