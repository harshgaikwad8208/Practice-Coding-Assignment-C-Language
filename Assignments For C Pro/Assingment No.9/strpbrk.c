#include<stdio.h>
#include<string.h>

void main()
{
    char str1[] = {"Harshal"};
    char str2[] = {"aeiou"};

    char* result = strpbrk(str1,str2);
    printf("Starting Array from first character found from str2: %s",result);
}

// Description: Searches the string for any character in the 'str1' string and returns a pointer to the first matching character.