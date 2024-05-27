#include<stdio.h>
#include<string.h>

void main()
{
    int result;
    char str1[] = {"Harsh"};
    char str2[] = {"Harshal"};

    result = strncasecmp(str1,str2,4);
    printf("Compared Array : %d",result);
}

// Description: Compares the first 'n' characters of two strings, ignoring case.