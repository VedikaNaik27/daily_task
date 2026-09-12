#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0)
        return 0;

    int j = 0;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[j])
            nums[++j] = nums[i];
    }

    return j + 1;
}

int main() {
    int nums[] = {1, 1, 2, 2, 3, 4, 4};
    int n = sizeof(nums) / sizeof(nums[0]);

    int k = removeDuplicates(nums, n);

    printf("Output: %d\n", k);
    printf("Array: ");

    for (int i = 0; i < k; i++)
        printf("%d ", nums[i]);

    return 0;
}