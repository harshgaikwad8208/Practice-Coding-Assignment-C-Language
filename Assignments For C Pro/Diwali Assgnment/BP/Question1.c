// 1. Accept 5 Subject Mark’s & calculate Total marks & Average.

#include<stdio.h>
void main()
{
    int marks[5];
    int total = 0;

    printf("Enter marks for 5 subject: \n");
    for(int i = 0; i < 5; i++)
    {
        printf("Subject %d: ",i+1);
        scanf("%d",&marks[i]);
        total = total + marks[i];
    }
    float average = (float)total/5;

    printf("Total marks: %d\n",total);
    printf("Average marks: %f\n",average);
}