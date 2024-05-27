// Write a program to check if person is eligible to marry or not (male age >=21 and female age>=18).

#include<stdio.h>
void marry();
int main()
{
    marry();
}
void marry()
{
    int m_age,f_age;
    printf("Enter the age of the male: \n");
    scanf("%d",&m_age);
    printf("Enter the age of the female: \n");
    scanf("%d",&f_age);
   // printf("\n %d %d ",m_age,f_age);
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