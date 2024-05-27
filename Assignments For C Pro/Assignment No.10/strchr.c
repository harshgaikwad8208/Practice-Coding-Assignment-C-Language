#include<stdio.h>
#include<string.h>

char* mystrchr(char*, char);

void main()
{
    char str[] = "Harshal";
    char character = 'r';

    char *result = mystrchr(str, character);
    if (result != NULL) {
        printf("Character Found: %c at position %d\n", character, result - str);
        printf("Returned Array from given character is : %s",result);
    } else {
        printf("Character Not Found\n");
    }
}

char* mystrchr(char* str, char ch)
{
    int len = strlen(str),i=0;
    while (str[i] != '\0') {
        if (str[i] == ch) 
        {
            return &str[i];
        }
        i++;
    }
}

// Description: Returns a pointer to the first occurrence of character 'P' in the string, or NULL if not found.