/*
    C Program for Kids with the Greatest Number of Candies:
    
    Problem Statement:
    - Given the array candies and the integer extraCandies, where candies[i] represents the number of candies that the ith kid has.
    - For each kid check if there is a way to distribute extraCandies among the kids such that he or she can have the greatest number of candies among them. Notice that multiple kids can have the greatest number of candies.
    
    array candies = [5, 10, 15, 25] //Each Kid has these many candies 
    array indexes = [0,  1,  2,  3]
    extraCandies = eg: 3. If I have 3 extraCandies - find a way to distribute extraCandies amongst the kids to get the greates number of candies among them. 
    
    Example: 
    Input: candies = [2, 3, 5, 1, 3], extraCandies = 3
    Output: [true, true, true, false, true] 
    
    Example:
    Input: candies = [4,2,1,1,2], extraCandies = 1
    Output: [true, false, false, false, false]
    
    Example: 
    Input: candies = [12,1,12], extraCandies = 10
    Output: [true, false, true]
    
    Constraints:
    - Number of kids will be greater than 2 and less than 100
    - Each kid will not have more 100 candies 
    - extraCandies will be less than 50. 

    Format To deliver Solution in:
        bool* kidsWithCandies(int* candies, 
                              int candiesSize, 
                              int extraCandies, 
                              int* returnSize)
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int getMaxInArray(int *candies, int candiesSize)
{
    int max = candies[0];
    for (int i = 1; i < candiesSize; i++) {
        if (candies[i] > max)
            max = candies[i];
    }
    return max;
}

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){
    
    bool greatestFlag = false;
    bool *greatestArray = malloc(candiesSize * sizeof(bool));
    int maxInArray = getMaxInArray(candies, candiesSize);
    
    for (int i = 0; i < candiesSize; i++)
    {
        for (int j = 0; j < candiesSize; j++)
        {
            if(i == j)
            { 
                continue;
            }
            if((candies[i] + extraCandies) >= maxInArray)
            {
                greatestFlag = true;
            }
            else
            {
                greatestFlag = false;
            }
        }
        greatestArray[i] = greatestFlag;
    }
    
    *returnSize = candiesSize;
    return greatestArray;
    
}

int main(void)
{
    int *candies;
    int candiesSize = 3;
    int extraCandies = 1;
    int *returnSize;
    bool *solution;
    
    //Allocating Memory:
    returnSize = (int *)malloc(sizeof(int));
    candies = (int *)malloc(candiesSize * sizeof(int));
    
    //Assigning Values:
    candies[0] = 2;
    candies[1] = 8;
    candies[2] = 7;
    
    *returnSize = 8;
    
    solution = kidsWithCandies(candies, candiesSize, extraCandies, returnSize);
    
    for (int i = 0; i < candiesSize; i++)
    {
        printf("%i\n", solution[i]);
    }
}













