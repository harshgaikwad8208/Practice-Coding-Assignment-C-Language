// Infosys want’s to hire a Driver having following criteria’s.
// a. Age must be Greater than 40.
// b. Driving Experience Greater than 10 Years.
// c. 12th Mark’s Greater than 60.
// Take driver’s detail and display he is eligible job


#include <stdio.h>

int main() 
{

    int age, drivingExperience;
    float twelfthMarks;

    printf("Enter driver's age: ");
    scanf("%d", &age);

    printf("Enter driver's driving experience (in years): ");
    scanf("%d", &drivingExperience);

    printf("Enter driver's 12th-grade marks: ");
    scanf("%f", &twelfthMarks);

    if (age > 40 && drivingExperience > 10 && twelfthMarks > 60) 
    {
        printf("The driver is eligible for the job at Infosys.\n");
    } 
    else 
    {
        printf("The driver is not eligible for the job at Infosys.\n");
    }

    return 0;
}
