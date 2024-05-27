#include <stdio.h>

typedef struct Date 
{
    int day, month, year;
} Date;

typedef struct employee 
{
    int ID;
    char name[20];
    int salary;
    Date DOB;
    Date DOJ;
    Date DOL;
} employee;

int main() 
{
    employee s1;
    printf("Enter the ID no: ");
    scanf("%d", &s1.ID);
    printf("Enter the name of employee: ");
    scanf("%s", s1.name);  
    printf("Enter the day of your DOB: ");
    scanf("%d", &s1.DOB.day);

    printf("Enter the month of your DOB: "); 
    scanf("%d", &s1.DOB.month);  

    printf("Enter the year of your DOB: "); 
    scanf("%d", &s1.DOB.year);  

    printf("Enter the day of your DOJ: ");
    scanf("%d", &s1.DOJ.day);

    printf("Enter the month of your DOJ: "); 
    scanf("%d", &s1.DOJ.month);  

    printf("Enter the year of your DOJ: "); 
    scanf("%d", &s1.DOJ.year); 

    printf("Enter the day of your DOL: ");
    scanf("%d", &s1.DOL.day);

    printf("Enter the month of your DOL: "); 
    scanf("%d", &s1.DOL.month);  

    printf("Enter the year of your DOL: "); 
    scanf("%d", &s1.DOL.year);  



    printf("ID: %d\n", s1.ID); 
    printf("Name: %s\n", s1.name);
    printf("Date of Birth: %d/%d/%d\n", s1.DOB.day, s1.DOB.month, s1.DOB.year);
    printf("Date of Joining: %d/%d/%d\n", s1.DOJ.day, s1.DOJ.month, s1.DOJ.year);
    printf("Date of Leaving: %d/%d/%d\n", s1.DOJ.day, s1.DOJ.month, s1.DOJ.year);

    return 0;
}
