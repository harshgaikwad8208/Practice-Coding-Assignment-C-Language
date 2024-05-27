//Calculate Square of 1 to n Numbers.

#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Square of numbers from 1 to %d:\n", n);
    for (int i = 1; i <= n; ++i) 
    {
        int square = i * i;
        printf("%d^2 = %d\n", i, square);
    }

    return 0;
}
