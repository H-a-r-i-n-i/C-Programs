#include <stdio.h>
#include <stdbool.h>

bool canJump(int nums[], int numsSize) {
    int maxReach = 0;

    for (int i = 0; i < numsSize; ++i) {
      
        if (i > maxReach) {
            return false;
        }
  
        maxReach = (maxReach > i + nums[i]) ? maxReach : (i + nums[i]);

        if (maxReach >= numsSize - 1) {
            return true;
        }
    }

    return false;
}

int main() {
    int numsSize;
   printf("Enter the size of the array: ");
    scanf("%d", &numsSize);

       int nums[numsSize];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < numsSize; ++i) {
        scanf("%d", &nums[i]);
    }

    printf("%s\n", canJump(nums, numsSize) ? "true" : "false");

    return 0;
}
