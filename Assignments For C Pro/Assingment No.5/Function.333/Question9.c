// Check the given number is palindrome or not?

#include<stdio.h>
void pali(int);
void main()
{
    int original_number;  
    printf("Enter the number:\n");
    scanf("%d",&original_number);
    pali(original_number);
}
void pali(int original_number)
{
    
    int reversed = 0; 
    int num = original_number; 
  
    while (num != 0) { 
        int r = num % 10; 
        reversed = reversed * 10 + r; 
        num /= 10; 
    } 
  
    if (original_number == reversed) 
    { 
        printf(" Given number %d is a palindrome number", 
               original_number); 
    } 
    else 
    { 
        printf( 
            " Given number %d is not a palindrome number", 
            original_number); 
    } 
    
    
}