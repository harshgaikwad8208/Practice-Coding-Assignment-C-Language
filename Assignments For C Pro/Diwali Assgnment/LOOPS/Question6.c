//Display Fibonacci Series for given number.

#include <stdio.h>

int main() 
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d: ", n);

    while (first <= n) 
    {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
