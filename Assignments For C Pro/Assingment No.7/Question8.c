//Merge two arrays

#include<stdio.h>
void main()
{
    int arr[5],brr[5];
    int i ;
    
    printf("Enter the number in first array.\n");
    for(i = 0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the number in second array.\n");
    for(i = 0; i<5; i++)
    {
        scanf("%d",&brr[i]);
    }

    int crr[5+5];
    for(int i = 0; i < 5; i++)
    {
        crr[i] = arr[i];
    }

    for(int i = 0; i < 5; i++)        
    {
        crr[5 + i] = brr[i];
    }

    printf("Merge array is : /n");
    for(int i = 0; i < crr; i++)
    {
        printf("%d\n",crr[i]);
    }

}