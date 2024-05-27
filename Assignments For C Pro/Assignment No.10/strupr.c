#include <stdio.h>
#include <string.h>

void mystrupr(char*);

void main()
{
    char str[] = "Harshal";

    printf("Original String is : %s\n",str);

    mystrupr(str);

    printf("After Uppercase String is : %s",str);
}

void mystrupr(char* str)
{
    for (int i = 0; str[i] ; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - ('a' - 'A');
        }   
    }
}