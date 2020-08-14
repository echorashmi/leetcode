/*
FizzBuzz:
    Write a program that prints the numbers from 1 to 100. But for multiples of three print “Fizz” instead of the number and for the multiples of five print “Buzz”. For numbers which are multiples of both three and five print “FizzBuzz”.
*/

#include <stdio.h>

int main(void)
{
    int countfb = 0, countf = 0, countb = 0;
    
    for(int i = 1; i <= 100; i++)
    {
        if( i % 3 == 0 )
        {
            printf("Fizz");
            countf++;
            if ( i % 5 == 0)
            {
                printf("Buzz\n");
                countfb++;
            }
            else
            {
                printf("\n");
            }
        }
        else if( i % 5 == 0)
        {
            printf("Buzz\n");
            countb++;
        }
        printf("%i\n", i);
    }
    printf("Fizz: %i   Buzz: %i   FB: %i \n", countf, countb, countfb);
}