// Accept value’s of (x & y) and solve following Expression.
// (Z=(4x2+5y3)/2xy)

#include <stdio.h>

int main() 
{
    
    double x, y, z;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the value of y: ");
    scanf("%lf", &y);

    if (y != 0) 
    {
        z = (4 * x * 2 + 5 * y * 3 ) / (2 * x * y);

        printf("The value of Z is: %lf\n", z);
    } 
    else 
    {
        printf("Error: Division by zero. Please enter a non-zero value for y.\n");
    }

    return 0;
}
