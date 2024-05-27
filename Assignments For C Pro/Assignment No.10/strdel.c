#include<stdio.h>
#include<string.h>

int size = 7;

void mystrdel(char*, int);

void main()
{
    char str1[] = "Harshal";
    int index = 4;

    printf("Original String Before Delete : %s\n",str1);
    printf("Size Before Delete : %d\n",size);
    mystrdel(str1,index);

    printf("After Deletion of Character : %s\n",str1);
    printf("Size After Delete : %d\n",size);
}

void mystrdel(char* str1, int index)
{
    if (index < 0 || index >= size)
    {
        printf("Index Invalid !");
    }

    for (int i = index; i < size; i++)
    {
        str1[i] = str1[i+1];
    }
    size--;
}