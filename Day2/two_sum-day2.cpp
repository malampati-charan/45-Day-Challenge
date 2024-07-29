#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){

    //Variable declaration
    int i, j, *array;

    *returnSize = 2;

    array = (int*)malloc(sizeof(int) * 2);

    //iteration
    for(i = 0; i < numsSize; i++){
        for(j = i + 1; j < numsSize; j++){
            if(nums[i] + nums[j] == target){
                *(array) = i;
                *(array + 1) = j;
                return array;
            }
        }
    }

    return 1;

}