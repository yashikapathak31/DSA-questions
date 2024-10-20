#include <stdio.h>

void maxSumConsecutiveElements(int arr[], int n, int k) {
    if (k > n) {
        printf("Invalid\n");
        return;
    }

    int max_sum = 0, window_sum = 0;

    
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }
    max_sum = window_sum;

    
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        if (window_sum > max_sum) max_sum = window_sum;
    }

    printf("%d\n", max_sum);
}

int main() {
    int arr1[] = {100, 200, 300, 400}, k1 = 2;
    maxSumConsecutiveElements(arr1, 4, k1); 

    int arr2[] = {1, 4, 2, 10, 23, 3, 1, 0, 20}, k2 = 4;
    maxSumConsecutiveElements(arr2, 9, k2); 

    int arr3[] = {2, 3}, k3 = 3;
    maxSumConsecutiveElements(arr3, 2, k3); 

    return 0;
}
