//Accept array and print only prime numbers of array.

#include<stdio.h>
void main()
{
    int b[5];
    int i = 0,n,j,counter;
    printf("Enter the number.\n");
    for(i = 0; i<5; i++)
    {
        scanf("%d",&b[i]);
    }

    printf("All the prime numbers in the array are :\n");
    for(i=0;i<5;i++)
    {
        counter=0;
        for(j=2;j<b[i];j++)
        {
            if(b[i]%j==0)
            {
                counter = 1;
                break;
            }
            if(counter == 0)
            {
                printf("%d\n",b[i]);
            }
        }   
    }
}

