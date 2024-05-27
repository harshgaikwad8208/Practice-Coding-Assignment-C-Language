/*
Take two array and add sum in third array
Example-
arr[5]= {1,2, 3, 4,5}
brr[5]={10,20,30, 40, 50}
crr[5]={11,22,33,44,55}
*/

#include<stdio.h>
void main()
{
    int arr[5],brr[5],sum[5];
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

    for(i = 0; i<=5; i++)
    {
       sum[i]=arr[i]+brr[i];
    }

    printf("Sum of arrays:-\n");
    for(i = 0;i<5;i++)
    {
        printf("sum[%d]=%d\n",i,sum[i]);
    }
    
}
