#include<stdio.h>
#include<string.h>

char mystrcmp(char*, char*);

void main()
{
    int result;
    char str1[] = {"Harshal"};
    char str2[] = {"Gaikwad"};

    result = mystrcmp(str1,str2);
    if (result == 1)
    {
        printf("Not Equals !\n");
    }
    else if (result == 0)
    {
        printf("Strings are Equal !\n");
    }
    
    
    printf("Compared Array : %d",result);
}

char mystrcmp(char* str1, char* str2)
{   
    int i=0;
    while ( str1[i] != '\0')
    {
        if (str1[i] == str2[i])
        {
            return 0;
        }
        i++;
    }
    return 1;
}

// Description: Compares two strings and returns an integer based on their lexicographical order.