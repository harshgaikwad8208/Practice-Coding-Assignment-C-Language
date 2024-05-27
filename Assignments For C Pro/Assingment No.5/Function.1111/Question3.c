// check perfect number in the given range 1 to n?

#include <stdio.h>
void perfect();
int main() 
{
    perfect();
}
void perfect()
{
    int n, num, i, sum;

    printf("Enter the range (n): ");
    scanf("%d", &n);

    printf("Perfect numbers from 1 to %d are:\n", n);
    
    for (num = 1; num <= n; num++) 
    {
        i = 1;
        sum = 0;

        while (i < num) 
        {
            if (num % i == 0) {
                sum = sum + i;
            }
            i++;
        }

        if (sum == num)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}