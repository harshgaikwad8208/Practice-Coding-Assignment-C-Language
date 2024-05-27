// Write a program to check if person is eligible to marry or not (male age >=21 and female age>=18).

#include<stdio.h>
int marry();
int main()
{
    int x;
    x=marry();
    if(x==1)
    {
        printf("They are eligible to marry.\n");
    }
    if (x==0)
    {
        printf("The male is not eligible to marry.\n");
    }
    if(x==2)
    {
        printf("The female is not eligible to marry.\n");
    }
}
int marry()
{
    int m_age,f_age;
    printf("Enter the age of the male: \n");
    scanf("%d",&m_age);
    printf("Enter the age of the female: \n");
    scanf("%d",&f_age);
   // printf("\n %d %d ",m_age,f_age);
    if(m_age >= 21 && f_age >=18)
    {
        return 1;
        //printf("They are eligible to marry.\n");
    }
    else if (m_age <21)
    {
        return 0;
        //printf("The male is not eligible to marry.\n");
    }
    else if (f_age < 18)
    {
        return 2;
        //printf("The female is not eligible to marry.\n");
    }
}