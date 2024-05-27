#include<stdio.h>
#include<string.h>

void main()
{
    char str1[] = {"Harshal007"};
    char str2[] = {"1234567890"};

    int result = strcspn(str1,str2);
    printf("Total Character in str1 : %d",result);
}

// Description: Returns the length of the initial segment of 'str1' that does not contain any characters from 'str2'.