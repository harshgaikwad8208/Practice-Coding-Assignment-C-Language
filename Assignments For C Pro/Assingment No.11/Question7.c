// WAP to Remove the Characters of Odd Index Values in a String
#include<stdio.h>
#include<string.h>

void main()
{
    char str[] = "Harshal";
    char result;
    
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (i % 2 == 0)
        {
            result = result + str[i];
            // str[i] = str[i-1]; 
        }
        len++;
    }
    printf("Array after removing Odd index is : %s",result);

}