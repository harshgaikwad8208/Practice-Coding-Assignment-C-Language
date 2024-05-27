//Search the given number in array.
#include <stdio.h>

int main()
{
    int arr[5];
    int i;
    int search;
    printf("Enter the number.\n");
    for(i = 0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    for(i=0; i<5; i++)
    {
        if(arr[i]==search)
        {
            printf("%d found at position %d", search, i+1);
        }
    }
}

int main1()
{
    int b[5];
    int i = 0,ele;
    int min,max;
    printf("Enter the number.\n");
    for(i = 0; i<5; i++)
    {
        scanf("%d",&b[i]);
    }
     printf("Enter element to search: ");
    scanf("%d", &ele);
     
    for(i=0; i<5; i++)
    {
        if(b[i]==ele)
        {
	    printf("%d found at position %d", ele, i+1);
            return 0;		 
        }
 
    }
	printf("Element  not  found");
}