#include<stdio.h>
#include<string.h>

void mystrlen(char*, int*);

void main()
{
    
    char str[] = {"Harshal"};
    
    int len=0;
    mystrlen(str,&len);
    printf("Size of Array is : %d",len);
}

void mystrlen(char* str, int* len)
{   
    int length=0;
    while (str[length] != '\0')
    {
        length++;
    }
    *len = length; // str1[len] = '\0';


}


// Description: Returns the length of the input string.