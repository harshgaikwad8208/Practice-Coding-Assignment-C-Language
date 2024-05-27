//Print alternate elements in array.


#include<stdio.h>
void main()
{
    int b[5];
    int i = 0;
    printf("Enter the number.\n");
    for(i = 0; i<5; i++)
    {
        scanf("%d",&b[i]);
    }

    printf("Alternate elements of a given array \n");
        for (i = 0; i < 5; i = i + 2)
            printf( "%d\n", b[i]) ;
}
