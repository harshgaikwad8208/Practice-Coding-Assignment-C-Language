#include<stdio.h>
#include<string.h>

void mystrcat(char*, char*);
void main()
{
    char dest[] = {"Harshal"};
    char src[] = {"Gaikwad"}; 
    
    mystrcat(dest, src);
    printf("Concatenated Array : %s",dest);
}
void mystrcat(char* dest, char* src)
{
    int size = strlen(dest);
    int i=0;
    while (src[i] != '\0') 
    {
        dest[size + i] = src[i];
        i++;
    }
    dest[size + i] = '\0';
}

// Description: Concatenates the source string to the end of the destination string.