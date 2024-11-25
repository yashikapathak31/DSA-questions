#include <stdio.h>
#include <math.h>


int is_square_free(int num) {
    if (num == 1)
        return 0; 
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % (i * i) == 0)
            return 0; /
    }
    return 1; 
}


int count_square_free_divisors(int N) {
    int count = 0;

    for (int i = 1; i <= sqrt(N); i++) {
        if (N % i == 0) {
            
            if (is_square_free(i))
                count++;
          
            if (i != N / i && is_square_free(N / i))
                count++;
        }
    }
    return count;
}

int main() {
    int N;
    printf("Enter the number N: ");
    scanf("%d", &N);

    int result = count_square_free_divisors(N);
    printf("Number of square-free divisors: %d\n", result);

    return 0;
}
