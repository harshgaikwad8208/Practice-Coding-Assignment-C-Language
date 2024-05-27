// Reverse the string
// Ex. Hello world
// O/P olleH dlrow

#include <stdio.h>
#include <string.h>
int main() 
{
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    reverseString(inputString);

    printf("Reversed string: %s\n", inputString);

    return 0;
}

void reverseString(char str[]) 
{
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) 
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}
