#include<stdio.h>
#include<string.h>

void main()
{
    char str1[] = {"Harshal"};
    char str2[] = {"abcdefghijklmnopqrstuvwxyz"};

    int result = strspn(str1,str2);
    printf("Total Character in str1 : %d",result);
}

// NOT WORKING
// Description: Returns the length of the initial segment of 'str1' that consists of only characters from 'str2'.