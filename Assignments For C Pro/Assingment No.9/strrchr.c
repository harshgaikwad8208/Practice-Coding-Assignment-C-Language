#include<stdio.h>
#include<string.h>

void main()
{
    char str[] = "Harshal";

    char *result = strrchr(str,'a');
    printf("Last Character Found : %s",result);
}

// Description: Returns a pointer to the last occurrence of character 'h' in the string, or NULL if not found.