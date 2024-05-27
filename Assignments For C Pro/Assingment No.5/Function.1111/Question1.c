// Print armstrong number in the the given range 1 to n?

#include <stdio.h>
#include <math.h>
void arm();
int main() 
{
   arm();
}
void arm()
{
     int n, num, rem, temp, count, sum, org;
    printf("Enter the range (n): ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d are:\n", n);
    for (num = 1; num <= n; num++) {
        temp = num;
        org = num;
        count = 0;
        sum = 0;
        
        while (temp > 0) 
        {
            count++;
            temp = temp / 10;
        }

        temp = num;
        while (temp > 0) 
        {
            rem = temp % 10;
            sum = sum + pow(rem, count);
            temp = temp / 10;
        }

        if (sum == org) {
            printf("%d\n", org);
        }
    }

    return 0;
}