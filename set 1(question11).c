#include <stdio.h>

void print_right_triangle(int rows) {
    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        
        printf("\n");
    }
}

int main() {
    int rows;

   
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    
    print_right_triangle(rows);

    return 0;
}
