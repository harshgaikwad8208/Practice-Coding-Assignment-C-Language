#include <stdio.h>

int sum(int*, int*);

int main() 
{
    int a, n;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of n: ");
    scanf("%d", &n);
    sum(&a,&n);
  /*  int result = sum(a, n);
    printf("Sum from %d to %d is: %d\n", a, n, result);
    return 0;*/
}

int sum(int *a, int *n) {
    int i, add = 0;
    for (i = *a; i <= *n; i++) {
        add=add+ i;
    }
     printf("Sum from %d to %d is: %d\n",*a,*n,add);
  //  return add;
}
