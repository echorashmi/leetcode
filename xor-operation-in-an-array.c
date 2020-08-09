/*
    C program to compute the XOR of all elements of nums. 
    Given an integer n and an integer start. 
    Define an array nums where nums[i] = start + 2*i (O-indexed) and n == nums.length.
    Return the bitwise XOR of all elements of nums
    
    Example:
    Input: n = 5, start = 0
    Output = 8
*/

#include <stdio.h>

int xorOperation(int n, int start)
{
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        arr[i] = start + 2*i;
    }
    
    int bitwise_xor = arr[0];
    
    for(int i = 1; i < n; i++)
    {
        bitwise_xor = bitwise_xor ^ arr[i];
    }
    return bitwise_xor;
}

int main(void)
{
    int n = 4;
    int start = 3;
    printf("Final: %i\n", xorOperation(n, start));
}