// Write a program to check if person is eligible to marry or not (male age >=21 and female age>=18).

#include<stdio.h>
void marry(int,int);
void main()
{
    int ma,fa;
    printf("Enter the age of the male: \n");
    scanf("%d",&ma);
    printf("Enter the age of the female: \n");
    scanf("%d",&fa);
    marry(ma,fa);
}
void marry(int m_age, int f_age)
{
    
   
    if(m_age >= 21 && f_age >=18)
    {
        printf("They are eligible to marry.\n");
    }
    else if (m_age <21)
    {
        printf("The male is not eligible to marry.\n");
    }
    else if (f_age < 18)
    {
        printf("The female is not eligible to marry.\n");
    }
}