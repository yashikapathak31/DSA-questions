#include <stdio.h>

int findEquilibriumIndex(int arr[], int n) {
    if (n == 0) return -1;

    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum -= arr[i]; 

        if (leftSum == totalSum) {
            return i + 1; 
        }

        leftSum += arr[i];
    }

    return -1; 
}

int main() {
    int arr1[] = {-7, 1, 5, 2, -4, 3, 0};
    int arr2[] = {1, 2, 3};
    int arr3[] = {1, 3, 5, 2, 2};

    printf("Equilibrium index: %d\n", findEquilibriumIndex(arr1, sizeof(arr1) / sizeof(arr1[0])));
    printf("Equilibrium index: %d\n", findEquilibriumIndex(arr2, sizeof(arr2) / sizeof(arr2[0])));
    printf("Equilibrium index: %d\n", findEquilibriumIndex(arr3, sizeof(arr3) / sizeof(arr3[0])));

    return 0;
}
