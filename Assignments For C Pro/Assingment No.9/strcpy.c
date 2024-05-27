#include<stdio.h>
#include<string.h>

void main()
{
    char str1[5] = {"abcd"};
    char str2[5];

    strcpy(str2,str1);
    printf("Copied Array : %s",str2);
}

// Description: Copies the contents of the source string to the destination string.