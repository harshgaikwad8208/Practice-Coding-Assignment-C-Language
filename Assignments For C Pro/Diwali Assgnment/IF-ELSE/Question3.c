//Accept 4 different number’s & display Smaller number.

#include <stdio.h>

int main() 
{
    int num1, num2, num3, num4, smallest;

    printf("Enter four different numbers:\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    smallest = num1;

    if (num2 < smallest) 
    {
        smallest = num2;
    }
    if (num3 < smallest) 
    {
        smallest = num3;
    }
    if (num4 < smallest) 
    {
        smallest = num4;
    }

    printf("The smallest number is: %d\n", smallest);

    return 0;
}
