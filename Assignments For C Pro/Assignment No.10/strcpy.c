#include<stdio.h>

void mystrcpy(char*, char*);

void main()
{
    char str1[5] = {"abcd"};
    char str2[5];
    mystrcpy(str2, str1);
    printf("Copied Array : %s",str2);
}

void mystrcpy(char* str2, char* str1)
{
    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
}