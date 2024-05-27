// WAP to Take in a String and Replace Every Blank Space with special symbol.

#include<stdio.h>
#include<string.h>

void main()
{
    char str[] = "H ar sh al";

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '$';
        }
    }
    printf("String after replacing 'a' with '$' is : %s",str);
    
}