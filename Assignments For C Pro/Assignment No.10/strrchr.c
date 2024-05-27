#include<stdio.h>
#include<string.h>

char* mystrrchr(char*, char);

void main()
{
    char str[] = "Harshal";
    char character = 'r';

    char *result = mystrrchr(str, character);
    if (result != NULL) {
        printf("Character Found: %c at position %d\n", character, result - str);
        printf("Returned Array from given character is : %s",result);
    } else {
        printf("Character Not Found\n");
    }
}

char* mystrrchr(char* str, char ch)
{
    int i = strlen(str) - 1;
    while (i >= 0) {
        if (str[i] == ch) {
            return &str[i]; // Return a pointer to the last occurrence
        }
        i--;
    }
    return NULL;
}

// Description: Returns a pointer to the first occurrence of character 'P' in the string, or NULL if not found.