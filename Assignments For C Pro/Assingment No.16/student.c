#include <stdio.h>

typedef struct Date 
{
    int day, month, year;
} Date;

typedef struct Student 
{
    int roll;
    char name[20];
    Date DOB;
} Student;

int main() 
{
    Student s1;
    printf("Enter the roll no: ");
    scanf("%d", &s1.roll);
    printf("Enter the name of student: ");
    scanf("%s", s1.name);  
    printf("Enter the day of your DOB: ");
    scanf("%d", &s1.DOB.day);

    printf("Enter the month of your DOB: "); 
    scanf("%d", &s1.DOB.month);  

    printf("Enter the year of your DOB: "); 
    scanf("%d", &s1.DOB.year);  
   
    printf("Roll No: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("Date of Birth: %d/%d/%d\n", s1.DOB.day, s1.DOB.month, s1.DOB.year);

    return 0;
}
