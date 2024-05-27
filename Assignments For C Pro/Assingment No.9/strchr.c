#include<stdio.h>
#include<string.h>

void main()
{
    char str[] = "Haarshal";

    char *result = strchr(str,'h');
    printf("Character Found : %s",result);
}

// Description: Returns a pointer to the first occurrence of character 'P' in the string, or NULL if not found.