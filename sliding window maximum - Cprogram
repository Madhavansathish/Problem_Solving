#include <stdio.h>

void maxSlidingWindow(int nums[], int numsSize, int k) {
    for (int j = 0; j <= numsSize - k; j++) {
        int max = nums[j];
        for (int i = j; i < j + k; i++) {
            if (nums[i] > max) {
                max = nums[i];
            }
        }
        printf("%d ", max);
    }
    printf("\n");
}

int main() {
    int nums[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 3;

    maxSlidingWindow(nums, n, k);
    return 0;
}
