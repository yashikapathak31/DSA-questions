#include <stdio.h>

void find_maximums(int arr[], int N, int K) {
   
    for (int i = 0; i <= N - K; i++) {
        int max = arr[i]; 
        for (int j = i + 1; j < i + K; j++) {
           
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        
        printf("%d ", max);
    }
    printf("\n");
}

int main() {
    int arr[] = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13};
    int K = 4; 
    int N = sizeof(arr) / sizeof(arr[0]); 

    printf("Maximums of subarrays of size %d are:\n", K);
    find_maximums(arr, N, K); 
    return 0;
}
