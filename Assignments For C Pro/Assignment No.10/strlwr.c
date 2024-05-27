#include <stdio.h>
#include <string.h>

void mystrlwr(char*);

void main()
{
    char str[] = "HARSHAL";

    printf("Original String is : %s",str);

    mystrlwr(str);

    printf("After Lowercase String is : %s",str);
}

void mystrlwr(char* str)
{
    for (int i = 0; str[i] ; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + ('a' - 'A');
        }
        
    }

}