// Write a program to check the string is palindrome or not.

#include<stdio.h>
#include<string.h>

int main() 
{
  char str[50];
  char result[50];
  int i, j = 0;

  printf("Enter a string: ");
  gets(str);

  for (i = 0; i < strlen(str); i++) 
  {
    if (i % 2 == 0)
    {
      result[j] = str[i];
      j++;
    }
  }
  result[j] = '\0';

  printf("The string after removing the odd index characters is: %s", result);
}