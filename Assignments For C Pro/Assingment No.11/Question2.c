// WAP Replace all Occurrences of ‘a’ with $ in a String

#include<stdio.h>
#include<string.h>

void main()
{
    char str[] = "Harshal";

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a')
        {
            str[i] = '@';
        }
    }
    printf("String after replacing 'a' with '$' is : %s",str);
    
}