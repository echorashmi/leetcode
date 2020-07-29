/* 
    C Program to count the number of steps to reduce a number to Zero.
    
    Spec: Given a non-negative number num, return the number of steps to reduce it to zero. 
    If current number is even, divide by 2, otherwise subtract 1 from it. 
    
    Example Input: 14
    Output: 6
    
    Pending Submission, Leetcode is down. 
*/

#include <stdio.h>

int numberOfSteps (int num);

int main(void)
{
    printf("%i", numberOfSteps(14));
}

int numberOfSteps (int num){
    int count = 0; //Fixed bug, not initializing count to 0 was causing bugs on Leetcode Live Compiler. 
    while (num > 0)
    {
        if (num % 2 == 0)
        {
            num = num / 2;
        }
        else
        {
            num = num - 1;
        }
        count++;
    }
    return count;
}