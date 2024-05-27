// Check number is perfect or not.

#include<stdio.h>
int main()
{
    int i, no,sum = 0,m;
    printf("Enter the number to check perfect number:\n");
    scanf("%d",&no);
    m = no/2;
    for(i = 1; i <= m; i++)
    {
        if(no%i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == no)
    {
        printf("%d is a perfect number.",no);
    }
    else
    {
        printf("%d is a not perfect number.",no);
    }

    return 0;

}