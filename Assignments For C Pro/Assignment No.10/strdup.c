#include<stdio.h>
#include<string.h>

char* mystrdup(char*, char*);

void main()
{
    char str[] = "Harshal Gaikwad";
    char str2[50];

    printf("Original Array : %s\n",str);
    mystrdup(str,str2);
    printf("Duplicate Array : %s",str2);
}

char* mystrdup(char* str, char* str2)
{
    int i=0;
    while (str[i] != '\0')
    {
        str2[i] = str[i];
        i++;
    }
    str2[i] = '\0';
    
}

// Description: Creates a duplicate of the input string on the heap.