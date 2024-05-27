#include<stdio.h>
#include<string.h>

void main()
{
    char str[] = "Harshal Gaikwad";
    char *duplicate = strdup(str);

    printf("Original Array : %s\n",str);
    printf("Duplicate Array : %s",duplicate);
}

// Description: Creates a duplicate of the input string on the heap.