#include<stdio.h>

void mystrncpy(char*, char*, int);

void main()
{
    char str1[] = "Harshal";
    char str2[20];
    mystrncpy(str2, str1, 6);
    printf("Copied String (First 6 Chars): %s\n", str2);
}

void mystrncpy(char* str2, char* str1, int n)
{
    int i = 0;
    while (i < n && str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    while (i < n) {
        str2[i] = '\0';
        i++;
    }
}