#include <stdio.h>

int hasPairWithSumNaive(int A[], int N, int X) {
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (A[i] + A[j] == X) {
                return 1; 
            }
        }
    }
    return 0; 
}

int main() {
    int A[] = {1, 2, 4, 5, 7, 11};
    int N = sizeof(A) / sizeof(A[0]);
    int X = 9;

    if (hasPairWithSumNaive(A, N, X)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
