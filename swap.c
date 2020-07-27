/*
    Practicing Pointers using the Swap Function:
*/
#include <stdio.h>

void swap(int, int);

int main(void)
{
    int x = 10;
    int y = 20;
    printf("x: %i, y: %i\n", x, y);
    swap(x, y);
    printf("x: %i, y: %i\n", x, y);
}

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = x;
}