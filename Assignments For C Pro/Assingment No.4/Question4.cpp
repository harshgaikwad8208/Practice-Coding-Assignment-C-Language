// check strong number in the given range 1 to n?

#include <stdio.h>

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}

int main() {
    int n, num, i, digit, sum, temp;

    printf("Enter the range (n): ");
    scanf("%d", &n);

    printf("Strong numbers from 1 to %d are:\n", n);

    for (num = 1; num <= n; num++) 
    {
        temp = num;
        sum = 0;

        while (temp != 0) 
        {
            digit = temp % 10;
            sum += factorial(digit);
            temp /= 10;
        }

        if (sum == num) 
        {
            printf("%d\n", num);
        }
    }

    return 0;
}