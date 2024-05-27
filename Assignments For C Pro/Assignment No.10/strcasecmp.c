#include <stdio.h>
#include<string.h>

int mystrncasecmp(char*, char*);

int main() 
{
    char str[] = "apple123";
    char accept[] = "abcdefghijklmnopqrstuvwxyz";
    int length = mystrncasecmp(str, accept);
    printf("Length of Initial Segment: %d\n", length);
    return 0;
}

int mystrncasecmp( char *str,  char *accept) 
{
    int count = 0;
    while (*str != '\0' && strchr(accept, *str) != NULL) 
    {
        count++;
        str++;
    }
    return count;
}