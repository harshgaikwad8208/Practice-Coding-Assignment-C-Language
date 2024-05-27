#include<stdio.h>
#include<string.h>

char* mystrrev(char*);

void main() 
{
    char str[] = "Haarshal";
    printf("Original: %s\n", str);
    mystrrev(str);
    printf("Reversed: %s\n", str);
}

char* mystrrev(char* str)
{
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) 
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}  