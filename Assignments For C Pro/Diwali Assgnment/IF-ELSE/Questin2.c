//Accept 6 different number’s & display Larger number.

#include <stdio.h>
int main() 
{
    int num1, num2, num3, num4, num5, num6, largest;

    printf("Enter six different numbers:\n");
    scanf("%d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6);

    largest = num1;

    if (num2 > largest) 
    {
        largest = num2;
    }
    if (num3 > largest) 
    {
        largest = num3;
    }
    if (num4 > largest) 
    {
        largest = num4;
    }
    if (num5 > largest) 
    {
        largest = num5;
    }
    if (num6 > largest) 
    {
        largest = num6;
    }

    printf("The largest number is: %d\n", largest);

    return 0;
}
