// WAP to Remove the nth Index Character from a Non-Empty String


#include<stdio.h>
#include<string.h>

void main()
{
    char str1[] = "Harshal";
    int index = 4;
    int size = strlen(str1);

    for (int i = index; i < size; i++)
    {
        str1[i] = str1[i+1];
    }
    size--;

    printf("After Deleting the %dth Index, the array will be : %s",index,str1);
}