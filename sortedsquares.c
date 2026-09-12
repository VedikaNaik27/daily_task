#include <stdio.h>

void sortedSquares(int* nums, int n, int* result) {
    int left = 0, right = n - 1, pos = n - 1;

    while (left <= right) {
        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];

        if (leftSquare > rightSquare) {
            result[pos--] = leftSquare;
            left++;
        } else {
            result[pos--] = rightSquare;
            right--;
        }
    }
}

int main() {
    int nums[] = {-7, -3, -1, 4, 8};
    int n = sizeof(nums) / sizeof(nums[0]);
    int result[n];

    sortedSquares(nums, n, result);

    for (int i = 0; i < n; i++)
        printf("%d ", result[i]);

    return 0;
}