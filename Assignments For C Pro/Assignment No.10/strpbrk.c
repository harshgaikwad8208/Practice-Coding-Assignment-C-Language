#include<stdio.h>
#include<string.h>

char* mystrpbrk(char*, char*);

void main()
{
    char str1[] = {"Harshal"};
    char str2[] = {"aeiou"};

    char* result = mystrpbrk(str1,str2);

    if (result != NULL) {
        printf("First Vowel Found: %c at position %ld\n", *result, result - str1);
    } else {
        printf("No Vowels Found\n");
    }
    printf("Starting Array from first character found from str2: %s",result);
}

char* mystrpbrk(char* str1, char* str2)
{
    int str1len = strlen(str1);
    int str2len = strlen(str2);
    for (int i = 0; i < str1len; i++)
    {
        for (int j = 0; i < str2len; i++)
        {
            if (str1[i] == str2[j])
            {
                return (char *)(str1 + i);
            }
            
        }
        
    }
    return NULL;
    
}

// Description: Searches the string for any character in the 'str1' string and returns a pointer to the first matching character.