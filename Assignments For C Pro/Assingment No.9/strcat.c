#include<stdio.h>
#include<string.h>

void main()
{
    // char str1[20] = {"Harshal"};
    // char str2[] = {"Gaikwad"}; 

    // strcat(str1,str2);
    // printf("Concatenated Array : %s",str1);

    char str1[20];
    char str2[20];

    printf("Enter First Name : ");
    scanf("%s",str1);
    printf("Enter Second Name : ");
    scanf("%s",str2);

    strcat(str1,str2);
    printf("Concatenated Array : %s",str1);
}



// Description: Concatenates the source string to the end of the destination string.