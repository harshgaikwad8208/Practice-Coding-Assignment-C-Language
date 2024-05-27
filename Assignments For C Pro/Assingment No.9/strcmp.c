#include<stdio.h>
#include<string.h>

void main()
{
    int result;
    char str1[] = {"Harshal"};
    char str2[] = {"Gaikwad"};

    result = strcmp(str1,str2);
    printf("Compared Array : %d",result);
}

// Description: Compares two strings and returns an integer based on their lexicographical order.