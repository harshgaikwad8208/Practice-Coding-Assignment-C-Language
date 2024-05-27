#include<stdio.h>
#include<string.h>

char mystrcmp(char*, char*, int);

void main()
{
    int result;
    char str1[] = {"Harshal"};
    char str2[] = {"Gaikwad"};
    int character = 4;

    result = mystrcmp(str1,str2,character);
    if (result == 0)
    {
        printf("String is Equal till the index %d!",character);
    }
    else
    {
        printf("String is Not Equals !");
    }
}

char mystrcmp(char* str1, char* str2, int n)
{
    int i=0;
    while (str1[i] == str2[i] && str1[i] != '\0')
    {
        i++;
    }
    if (i == n)
    {
        return 0;
    }
    return str1[i] - str2[i];
}

// Description: Compares two strings and returns an integer based on their lexicographical order.
