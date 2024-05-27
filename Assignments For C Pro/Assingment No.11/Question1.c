// Write a program to scan string from user then scan a single character and search it in a accepted string.

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[20];
    char search;
    
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to search in String: ");
    scanf(" %c", &search);

    int found = 0;

    for (int i = 0; i < strlen(str); i++) 
    {
        if (str[i] == search) 
        {
            found = 1;
            break;
        }
    }

    if (found == 1) 
    {
        printf("The character '%c' was Found in the string at Index %d.\n", search,i);
    } 
    else 
    {
        printf("The character '%c' was Not Found in the string.\n", search);
    }
}