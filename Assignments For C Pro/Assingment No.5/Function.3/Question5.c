// Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30% respectively.

#include<stdio.h>
void total(int);
void main()
{
    int bs = 5000;
    total(bs);
}
void total(basic)
{
    
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