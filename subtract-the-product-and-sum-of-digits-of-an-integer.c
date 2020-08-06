/*
    Given an integer number n, return the difference between the product of its digits and the sum of its digits.
    i.e. given a number 10, return the difference between 1*0 and 1+0 
    |(1*0) - (1+0)| = |0 - 1| = 1
*/

#include <stdio.h>

int subtractProductAndSum(int n)
{
    int product = 1;
    int sum = 0;
    int tmp;
    int i = 0;
    
    for(; n > 0; n/=10) //Dividing by 10 "ejects" the last digit in the number
    {
        tmp = n%10; //Modding by 10 "retrieves" the last digit in the number
        product *= tmp;
        sum += tmp;
    }
    return product - sum;
}

int main(void)
{
    printf("Final Answer: %i\n", subtractProductAndSum(234));
}