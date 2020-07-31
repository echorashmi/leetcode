/*
    C Program to Shuffle a String. 
    Given a String s and integer array indices of same length. 
    S will be shuffled such that character in i'th position moves to indices[i] in the shuffled string.
    Return the shuffled String.
    
    Eg: 
    Input: [4, 5, 6, 7, 0, 2, 1, 3]
    Input: [c, o, d, e, l, e, e, t]
    
    Output: [0, 1, 2, 3, 4, 5, 6, 7]
    Output: [l, e, e, t, c, o, d, e]
*/
#include <stdio.h>
#include <string.h>

char * restoreString(char *s, int *indices, int indicesSize)
{
    //Sort the Indices array:
    for (int i = 0; i < indicesSize; i++)
    {
        for (int j = i; j < indicesSize; j++)
        {
            if(indices[i] > indices[j])
            {
                int tmp = indices[i];       char tmpstr = s[i];
                indices[i] = indices[j];    s[i] = s[j];
                indices[j] = tmp;           s[j] = tmpstr;
            }
        }
    }
    
    return s;
}

int main(void)
{
    char s[] = "codeleet";
    int indices[] = {4, 5, 6, 7, 0, 2, 1, 3};
    int indicesSize = 8;
    
    printf("%s\n", restoreString(s, indices, indicesSize));
}