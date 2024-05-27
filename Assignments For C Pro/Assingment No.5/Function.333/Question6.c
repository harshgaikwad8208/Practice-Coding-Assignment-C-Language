// Check number is perfect or not.

#include<stdio.h>
void perfect(int);
void main()
{
    int no;
    printf("Enter the number to check perfect number:\n");
    scanf("%d",&no);
    perfect(no);
}
void perfect(int no)
{
    int i,sum = 0,m;
    
    m = no/2;
    for(i = 1; i <= m; i++)
    {
        if(no%i == 0)
        {
            sum += i;
        }
    }

    if(sum == no && no > 0)
    {
        printf("%d is a perfect number.",no);
    }
    else
    {
        printf("%d is a not perfect number.",no);
    }

    return 0;

}