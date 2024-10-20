#include <stdio.h>
#include <stdlib.h>

void minHeapify(int* heap, int size, int i) {
    int smallest = i, left = 2 * i + 1, right = 2 * i + 2;
    if (left < size && heap[left] < heap[smallest]) smallest = left;
    if (right < size && heap[right] < heap[smallest]) smallest = right;
    if (smallest != i) {
        int temp = heap[i]; heap[i] = heap[smallest]; heap[smallest] = temp;
        minHeapify(heap, size, smallest);
    }
}

void minHeapInsert(int* heap, int* size, int value, int k) {
    if (*size < k) {
        heap[(*size)++] = value;
        for (int i = (*size) / 2 - 1; i >= 0; i--) minHeapify(heap, *size, i);
    } else if (value > heap[0]) {
        heap[0] = value;
        minHeapify(heap, *size, 0);
    }
}

int findKthLargest(int* nums, int numsSize, int k) {
    int* minHeap = malloc(k * sizeof(int));
    int size = 0;

    for (int i = 0; i < numsSize; i++) {
        minHeapInsert(minHeap, &size, nums[i], k);
    }

    int result = minHeap[0];
    free(minHeap);
    return result;
}

int main() {
    int nums[] = {3, 2, 1, 5, 6, 4}, k = 2;
    printf("The %d-th largest element is: %d\n", k, findKthLargest(nums, sizeof(nums) / sizeof(nums[0]), k));
    return 0;
}
