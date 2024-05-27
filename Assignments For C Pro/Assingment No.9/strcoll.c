#include<stdio.h>
#include<string.h>

void main()
{
    char str1[] = "apple";
    char str2[] = "Apple";
    int result = strcoll(str1, str2);

    printf("Compared Array : %d",result);
}

// Description: Compares two strings using the current locale-specific collation rules.