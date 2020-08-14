/*
    Playing around with pointers and passing by reference.
*/


#include <stdio.h>

int* increment_by_pointer(int* pa) //Here we receive with a *asterik operator
{
    printf("a: %i\n", *pa); //Here we access with an *asterik operator. 
    return pa;
}

int main(void)
{
    int a = 10; 
    increment_by_pointer(&a); //So here we pass with an &ampersand operator
}