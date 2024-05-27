// WAP to Form a New String where the First Character and the Last Character have been Exchanged

#include<stdio.h>
#include<string.h>

int main() 
{
	char str[20],temp;

	printf("Enter the String: ");
	gets(str);

	int len = strlen(str);

	temp = str[0];
	str[0] = str[len - 1];
	str[len - 1] = temp;

	printf("Output String: %s", str);
}