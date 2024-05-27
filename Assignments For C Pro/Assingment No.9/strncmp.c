#include<stdio.h>
#include<string.h>

void main()
{
    int result;
    char str1[] = {"apple"};
    char str2[] = {"appy"};

    result = strncmp(str1,str2,2);
    printf("Compared Till 'n' Array : %d",result);
}

// Description: Compares the first 'n' characters of two strings.