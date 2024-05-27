#include<stdio.h>
#include<string.h>

void main()
{
    // char str1[20] = {"Harshal"};
    // char str2[] = {"Gaikwad"}; 

    // strncat(str1,str2,4);
    // printf("Concatenated Array : %s",str1);

    char str1[20];
    char str2[20];
    int size;

    printf("Enter First Name : ");
    scanf("%s",&str1);
    printf("Enter Second Name : ");
    scanf("%s",&str2);
    printf("Enter Size : ");
    scanf("%d",&size);

    strncat(str1,str2,size);
    printf("Concatenated Array : %s",str1);
}

// Description: Concatenates at most 'n' characters from the source string to the end of the destination string.