/*
    C Program for shuffle-the-array:
    Given an array in the form: [x1, x2, x3...xn, y1, y2, y3...yn]
    Return the array in the form: [x1, y1, x2, y2, x3, y3...xn, yn]
    
    Constraints:
    array length will be less than 500
    length will always be 2n
    numbers in the array will be less than 1000
    
    So, for an array that looks like this:
    array   = [1, 2, 3, 4, 10, 11, 12, 13]
    indexes = [0, 1, 2, 3,  4,  5,  6,  7]
    
    We want to output:
    [1, 10, 2, 11, 3, 13, 4, 14]
    
    For ease of reference, let's name these bad boys as follows:
    [a1, b10, a2, b11, a3, b12, a4, b13]
    
    So, to solve this for n = 4, we want to access 2 arrays of size 4 each. 
    Let's print out the first 4 elements first, that gives us a for loop from i to n. 
    Then we print out the next 4 elemnts, giving us a for loop from n+1 to 2n. 
*/

#include <stdio.h>
#include <stdlib.h>

/* The format in which I have to deliver: */
int* shuffle(int* nums, int numsSize, int n, int* returnSize)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int* nums_shuffled = malloc(2 * n * sizeof(int)); //[2*n];
    
    j = 1;
    for (i = 0; i < 2*n; i+=2)
    {
        nums_shuffled[i] = nums[k];
        nums_shuffled[j] = nums[k+n];
        j+=2;
        k++;
    }
    *returnSize = numsSize;
    return nums_shuffled;
}

/* The logic that works: */
int main(void)
{
    //Initializing:
    int *nums;
    int numsSize = 8;
    int n = 4;
    int *returnSize;
    
    //Allocating Memory:
    returnSize = (int *)malloc(sizeof(int));
    nums = (int *)malloc(8 * sizeof(int));
    
    //Assigning Values:
    nums[0] = 1;
    nums[1] = 2;
    nums[2] = 3;
    nums[3] = 4;
    nums[4] = 10;
    nums[5] = 11;
    nums[6] = 12;
    nums[7] = 13;
    *returnSize = 8;
    
    //Running the Function:
    nums = shuffle(nums, numsSize, n, returnSize);
    
    for (int i = 0; i < 8; i++)
    {
        printf("%i\n", nums[i]);
    }
    
    /*
    int n = 4;
    int i = 0;
    int j = 0;
    int k = 0;
    int arr[8] = {1, 2, 3, 4, 10, 11, 12, 13};
    int arr_shuffled[2*n];
    
    j = 1;
    for (i = 0; i < 2*n; i+=2)
    {
        arr_shuffled[i] = arr[k];
        arr_shuffled[j] = arr[k+4];
        j+=2;
        k++;
    }
    
    for (i = 0; i < 2*n; i++)
    {
        printf("%i\n", arr_shuffled[i]);
    }
    */
    
}