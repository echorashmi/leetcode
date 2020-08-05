/*
    C Program to get how many numbers are smaller than current number 
    Eg: 
        Input:  [8, 1, 2, 2, 3]
        Output: [4, 0, 1, 1, 3]

*/

#include <stdio.h>
#include <stdlib.h>

int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize)
{
    int needle, haystack;
    int* countNums = malloc(sizeof(int)*numsSize);
    for (int i = 0; i < numsSize; i++)
    {
        int count = 0; 
        for (int j = 0; j < numsSize; j++)
        {
            if(nums[j] < nums[i])
            {
                count++;
            }
        }
        countNums[i] = count;
    }
    //*returnSize = numsSize;
    return countNums;
}

int main(void)
{
    int nums[] = {8, 1, 2, 2, 3};
    int numsSize = 5;
    int* returnSize;
    int* countNums = malloc(5*sizeof(int));
    
    countNums = smallerNumbersThanCurrent(nums, numsSize, returnSize);
    
    for (int i = 0; i < numsSize; i++)
    {
        printf("%i\t", *(countNums + i));
    }
    
}