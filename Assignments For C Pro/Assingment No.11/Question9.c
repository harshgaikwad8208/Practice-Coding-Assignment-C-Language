// WAP to Take in Two Strings and Display the Larger String without Using Built-in Functions

#include<stdio.h>
#include<string.h>

void main()
{
    char str1[] = "harsh";
    char str2[] = "gaikwad";
    
    int str1len=0,str2len=0;
    while (str1[str1len] != '\0')
    {
        str1len++;
    }

    while (str2[str2len] != '\0')
    {
        str2len++;
    }

    if (str1len > str2len)
    {
        printf("String 1 %s, is greater than String 2",str1);
    }
    else
    {
        printf("String 2 %s, is greater than String 1",str2);
    }
}