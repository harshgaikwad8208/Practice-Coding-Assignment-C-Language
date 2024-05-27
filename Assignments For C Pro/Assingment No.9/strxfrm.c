#include<stdio.h>
#include<string.h>

void main()
{
    char str1[] = "apple";
    char str2[20];
    int length = strxfrm(str2, str1, 8);


    printf("%s",str2);
    printf("Size of Array : %d",length);
}

// Description: Transforms 'str1' into a string suitable for sorting and stores it in 'str2'.