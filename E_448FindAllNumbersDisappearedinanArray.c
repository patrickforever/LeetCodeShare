#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#include <math.h>

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize)
{
    int i, j,temp, index;
    int *answerArray;
    answerArray = calloc(numsSize,sizeof(int));
    for(i=0; i<numsSize; i++)
    {
        if(nums[i]!=-1)
        {
            if(nums[i] == i+1)
                nums[i] = -1;
            else if(nums[nums[i]-1] != -1)
            {
                index = nums[nums[i]-1];
                nums[nums[i]-1] = -1;
                nums[i] = index;
                i--;
            }
        }
    }
    for(i=0,j=0; i<numsSize; i++)
    {
        if(nums[i]!=-1)
        {
            answerArray[j ++] = i+1;
        }
    }
    *returnSize = j;
    answerArray = realloc(answerArray,sizeof(int)*(j));
    return answerArray;
}
