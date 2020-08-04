/*
    Current Status: Asked Question on StackOverflow: https://stackoverflow.com/questions/63254400/why-does-this-code-work-on-my-local-machine-but-not-on-leetcode
    
    C Program to Defang an IP Address. 
    Example
    Input:  1.1.1.1
    Output: 1[.]1[.]1[.]1
    
    Pending Submit, leetcode platform is currently having issues
*/

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

char * defangIPaddr(char * address);

int main(void)
{
    char *address = "255.100.50.0";
    printf("%s\n", defangIPaddr(address));
}

char * defangIPaddr(char * address){
    char *defangedAddress;
    defangedAddress = malloc(sizeof(address) + 10);
    int j = 0;
    
    int length = 0;
    length = strlen(address);
    for (int i = 0; i < length; i++)
    {
        if(address[i] == '.')
        {
            defangedAddress[j] = '[';
            defangedAddress[j+1] = '.';
            defangedAddress[j+2] = ']';
            j = j+3;
        }
        else
        {
            defangedAddress[j] = address[i];
            j++;
        }
    }
    return defangedAddress;
}