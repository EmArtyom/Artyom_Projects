#include <stdio.h>
#include <stdlib.h>

int main() {
  int *nums;
  int num, size = 0;

  printf("Enter non-negative integers (enter -1 to finish):\n");

  while (1) {
    scanf("%d", &num);
    if (num == -1) {
      break;
    } else if (num < 0) {
      printf("Please enter a non-negative number.\n");
    } else {
      size++;
      nums = (int *)realloc(nums, size * sizeof(int));
      nums[size - 1] = num;
    }
  }

  // Remove duplicates
  for (int i = 0; i < size; i++) { 
    for (int j = i + 1; j < size; j++) {
      if (nums[i] == nums[j]) {
        for (int k = j; k < size - 1; k++) {
          nums[k] = nums[k + 1];
        }
        size--;
        j--;
        nums = (int *)realloc(nums, size * sizeof(int));
      }
    }
  }

  printf("Array after removing duplicates:\n");
  for (int i = 0; i < size; i++) {
    printf("%d ", nums[i]);
  }

  free(nums);

  return 0;
}