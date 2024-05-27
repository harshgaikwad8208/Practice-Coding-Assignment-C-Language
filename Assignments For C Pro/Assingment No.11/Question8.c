// WAP to Calculate the Number of Words and the Number of Characters Present in a String

#include<stdio.h>
#include<string.h>

void main()
{
    int found = 1 ,count = 0;
    char str[] = "Harshal Gaikwad MH - 28 Buldhana";

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            found++;
        }
    }

    for (int j = 0; j < strlen(str); j++)
    {
        if (str[j] != '\0')
        {
            count++;
        }
    }
    
    printf("Total Words are : %d\n",found);
    printf("Total Characters are : %d",count);
}