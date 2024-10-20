#include <stdio.h>

void print_parallelogram(int rows, int columns) {
    for (int i = 0; i < rows; i++) {
       
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
       
        for (int k = 0; k < columns; k++) {
            printf("*");
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

    
    print_parallelogram(rows, columns);

    return 0;
}
