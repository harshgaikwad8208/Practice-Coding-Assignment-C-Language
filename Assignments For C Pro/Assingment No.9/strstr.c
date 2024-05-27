#include<stdio.h>
#include<string.h>

void main() 
{
    char str1[] = {"Firstbit Sol"};
    char str2[] = {"bitx"};

    char* result = strstr(str1,str2);
    printf("Array from given character : %s",result);
}

// Description: Returns a pointer to the first occurrence of the substring 'str2' in 'str1', or NULL if not found.