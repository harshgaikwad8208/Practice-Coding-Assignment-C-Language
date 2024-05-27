// Print prime number in the given range 1 to n?

#include <stdio.h>
void prime();
int main() 
{
    prime();
}
void prime()
{
    int n, num, i, factor;

    printf("Enter the range (n): ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);
    
    for (num = 1; num <= n; num++) {
        factor = 0; 
        for (i = 1; i <= num; i++) {
            if (num % i == 0) {
                factor++;
            }
        }
       
        if (factor == 2) {
            printf("%d\n", num);
        }
    }

    return 0;
}