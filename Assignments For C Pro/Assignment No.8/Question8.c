//Merge two arrays

#include<stdio.h>

void merge(int*, int*, int*, int, int);

void main()
{
    int n1,n2;

    printf("Enter the Size of First Array : ");
    scanf("%d",&n1);
    int arr[n1];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the Size of Second Array : ");
    scanf("%d",&n2);
    int brr[n2];
    for (int i = 0; i < n2; i++)
    {
        scanf("%d",&brr[i]);
    }

    int crr[n1+n2];

    merge(arr,brr,crr,n1,n2);
}


void merge(int* arr, int* brr, int* crr, int n1, int n2)
{
    for (int i = 0; i < n1; i++)
    {
        crr[i] = arr[i];
    }

    for (int j = 0; j < n2; j++) 
    {
        crr[j + n1] = brr[j];
    }

    printf("Merged Array is : \n");
    for (int i = 0; i < n1+n2; i++)
    {
        printf("\n%d",crr[i]);
    }
}