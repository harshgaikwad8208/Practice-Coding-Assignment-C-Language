#include <stdio.h>

typedef struct Student 
{
    int FBID;
    char name[20];
    int distance;
    
} Student;

typedef struct PlacedStudent
{
    Student S;
    char company[20];
    char designation[20];
} PlacedStudent;

int main() 
{
    PlacedStudent s1;
    printf("Enter the FBID: ");
    scanf("%d", &s1.S.FBID);
    printf("Enter the name of student: ");
    scanf("%s", s1.S.name);  
    printf("Enter the Distance: ");
    scanf("%d", &s1.S.distance);

    printf("Enter the Company Name: "); 
    scanf("%s", &s1.company);  

    printf("Enter the Designation: "); 
    scanf("%s", &s1.designation);  
   
    printf("FBID No: %d\n", s1.S.FBID);
    printf("Name: %s\n", s1.S.name);
    printf("Company Name: %s\n", s1.company);
    printf("Designation: %s\n", s1.designation);
    
    

    return 0;
}
