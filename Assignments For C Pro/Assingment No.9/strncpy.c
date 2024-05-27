#include<stdio.h>
#include<string.h>

void main()
{
    // char str1[] = {"Prathamesh"};
    // char str2[20];

    // strncpy(str2,str1,6);
    // str2[7] = '\0';
    // printf("Copied Array : %s",str2);

    char source[] = "Copy this.";
    char destination[20];
    strncpy(destination, source, 6);  // Copies "Copy t" to destination
    printf("Copied Array : %s",destination);

}

// Description: Copies up to 'n' characters from the source string to the destination string.