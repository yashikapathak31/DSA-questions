#include <stdio.h>
#include <stdlib.h>

int maxLengthSubarray(int nums[], int n, int target) {
    int max_length = 0, current_sum = 0;
    int *hashmap = malloc((n + 1) * sizeof(int)); 
    for (int i = 0; i <= n; i++) hashmap[i] = -2; 

    hashmap[0] = -1; 

    for (int i = 0; i < n; i++) {
        current_sum += nums[i];

        
        if (hashmap[current_sum - target + n] != -2) {
            int length = i - hashmap[current_sum - target + n];
            if (length > max_length) max_length = length;
        }

       
        if (hashmap[current_sum + n] == -2) {
            hashmap[current_sum + n] = i;
        }
    }

    free(hashmap);
    return max_length;
}

int main() {
    int nums[] = {5, 6, -5, 5, 3, 5, 3, -2, 0};
    int target = 8;
    int length = maxLengthSubarray(nums, sizeof(nums) / sizeof(nums[0]), target);
    printf("Maximum length: %d\n", length); 
    return 0;
}
