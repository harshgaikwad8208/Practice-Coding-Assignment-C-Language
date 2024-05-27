// Display a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to enter his choice, then based on that perform the desired operations.

#include<stdio.h>
int even();
int salary();
void main()
{
    
    even();
    salary();
}
int even()
{
    int choice;
    printf("1:Even odd and 2:Basic salary\n");
    scanf("%d",&choice);
    
    if(choice == 1)
    {
        int no;
        printf("Enter the number:\n");
        scanf("%d",&no);
        if (no%2==0)
        {
        printf("The number is Even %d.",no);
        }
        else
        {
        printf("The number is odd %d.",no);
        }
    }
}
int salary()    
{
    int choice;
    printf("1:Even odd and 2:Basic salary\n");
    scanf("%d",&choice);

    if(choice == 2)
    {
            int basic = 5000;
            float da,ta,hra,totalsalary;
    if(basic<=5000)
    {
        da = basic * 0.1;
        ta = basic *0.2;
        hra = basic *0.25;
    }
    else
    {
        da = basic * 0.15;
        ta = basic *0.25;
        hra = basic *0.3;
    }

    totalsalary = basic + ta + da + hra;
    printf("Total salary is %f.\n",totalsalary);
    }
}
