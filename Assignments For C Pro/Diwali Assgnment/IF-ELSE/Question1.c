// Accept Mark’s & display Grades eg.75 above A grade, 65 above B grade,fail

#include <stdio.h>

int main() 
{
    float marks;
    printf("Enter the marks: ");
    scanf("%f", &marks);

    if (marks >= 75) 
    {
        printf("Grade: A\n");
    } 
    else if (marks >= 65) 
    {
        printf("Grade: B\n");
    } 
    else 
    {
        printf("Grade: Fail\n");
    }

    return 0;
}
