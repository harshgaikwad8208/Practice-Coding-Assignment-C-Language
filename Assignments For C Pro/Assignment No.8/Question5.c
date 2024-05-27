//Print alternate elements in array.


#include<stdio.h>
void alter(int*,int);
void main()
{
    int b[5];
    int*ptr;
    ptr = b;
    alter(b,5);
}
void alter(int* b, int n)
{
    int i ;
    printf("Enter the number.\n");
    for(i = 0; i<n; i++)
    {
        scanf("%d",&b[i]);
    }

    printf("Alternate elements of a given array \n");
        for (i = 0; i < n; i = i + 2)
            printf( "%d\n", b[i]) ;
}
