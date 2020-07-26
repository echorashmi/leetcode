/*
    C Program to find the number of Good Pairs.
    What is a Good Pair?
    Given an array: [1, 2, 3, 1, 1, 3]
    The positions : [0, 1, 2, 3, 4, 5]
    The number of good pairs are where array[i] = array[j], where i is less than j. 
    So, we have array[0] == array[3], that's 1 good pair 
    Next, we have array[0] == array[4], thats the second good pair 
    Next, we have array[2] == array[5], that's the third good pair
    Lastly, we have array[3] == array[4], that's the fourth good pair. 
    
    So, as long as i is less than j and a[i] == a[j], it's a good pair. 
    
    The output just needs to be the count. Not the actual pairs. 
    
    Constraints: Length of array will not exceed 100. 
*/

#include <stdio.h>

int main(void)
{
    const int len = 6;
    int arr[len] = {1, 2, 3, 1, 1, 3};
    int count_good_pairs = 0;
    
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                count_good_pairs++;
                printf("%i == %i, counter incremented to %i\n", arr[i], arr[j], count_good_pairs);
            }
        }
    }
    return count_good_pairs;
}