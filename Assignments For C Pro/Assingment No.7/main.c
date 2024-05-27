#include<stdio.h>
int main()
{
    int choice ;
    printf("\n1:Find minimum and maximum number in array.\n2:Search the given number in array.  \n3:Find sum of all numbers. \n4:Find odd and even among the numbers. \n5:Print alternate elements in array. \n6:Accept array and print only prime numbers of array. \n7:Take two array and add sum in third array.\n8:Merge two arrays.  \n9:Reverse the given array. \n10:Sort the array.\n");
    printf("plz enter your choice :-");
    scanf("%d",&choice);

    if(choice == 1)
    {
        int b[5];
        int i = 0;
        int min,max;
        printf("Enter the number.\n");
        for(i = 0; i<5; i++)
       {
        scanf("%d",&b[i]);
       }

        min=max=b[0];
        for(i=0; i<5;i++)
        {
        if(min>b[i])
        min=b[i];
            if(max<b[i])
            max=b[i];
         }
        printf("minimum of array is : %d",min);
          printf("\nmaximum of array is : %d",max);
    }

    else if(choice == 2)
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

    else if(choice == 3)
    {
        int b[5];
        int i = 0,sum= 0;
        printf("Enter the number.\n");
        for(i = 0; i<5; i++)
        {
        scanf("%d",&b[i]);
        }

        for(i =0; i<5; i++)
        {
        sum = sum+b[i];
        }
        printf("Sum of the array is: %d",sum);
    }

    else if(choice == 4)
    {
        int b[5];
        int i = 0;
        printf("Enter the number.\n");
        for(i = 0; i<5; i++)
        {
        scanf("%d",&b[i]);
        }

        printf("Even numbers in the array are: \n");
        for(i=0; i<5; i++)
        {
         if(b[i]%2==0)
         printf("%d ", b[i]);
        }

        printf("\nOdd numbers in the array are: \n");
        for(i=0; i<5; i++)
        {
         if(b[i]%2!=0)
         printf("%d ", b[i]);
        }
    }

    else if(choice == 5)
    {
        int b[5];
        int i = 0;
        printf("Enter the number.\n");
        for(i = 0; i<5; i++)
        {
        scanf("%d",&b[i]);
        }

        printf("Alternate elements of a given array \n");
        for (i = 0; i < 5; i = i + 2)
            printf( "%d\n", b[i]) ;
    }

    else if(choice == 6)
    {
        int b[5];
        int i = 0,n,j,counter;
        printf("Enter the number.\n");
        for(i = 0; i<5; i++)
        {
        scanf("%d",&b[i]);
        }

        printf("All the prime numbers in the array are :\n");
        for(i=0;i<5;i++)
        {
        counter=0;
        for(j=2;j<b[i];j++)
        {
            if(b[i]%j==0)
            {
                counter = 1;
                break;
            }
            if(counter == 0)
            {
                printf("%d\n",b[i]);
            }
        }
        
        
        }
    }

    else if(choice == 7)
    {
        int arr[5],brr[5],sum[5];
        int i ;
        printf("Enter the number in first array.\n");
        for(i = 0; i<5; i++)
        {
        scanf("%d",&arr[i]);
        }

        printf("Enter the number in second array.\n");
        for(i = 0; i<5; i++)
        {
        scanf("%d",&brr[i]);
        }

        for(i = 0; i<=5; i++)
        {
        sum[i]=arr[i]+brr[i];
        }

        printf("Sum of arrays:-\n");
        for(i = 0;i<5;i++)
        {
        printf("sum[%d]=%d\n",i,sum[i]);
        }
    }   

    if(choice == 8)
    {
        #include<stdio.h>
        void main()
        {
        int arr[5],brr[5];
        int i ;
    
        printf("Enter the number in first array.\n");
        for(i = 0; i<5; i++)
        {
            scanf("%d",&arr[i]);
        }   

        printf("Enter the number in second array.\n");
        for(i = 0; i<5; i++)
        {
            scanf("%d",&brr[i]);
        }

        int crr[5+5];
        for(int i = 0; i < 5; i++)
        {
            crr[i] = arr[i];
        }

        for(int i = 0; i < 5; i++)        
        {
            crr[5 + i] = brr[i];
        }

        printf("Merge array is : /n");
        for(int i = 0; i < crr; i++)
        {   
            printf("%d\n",crr[i]);
        }

    }   
    }
    

    else if(choice == 9)
        {
            int b[5];
            int i = 0;
            printf("Enter the array no.\n");
            for(i=0;i<5;i++)
            {
                scanf("%d",&b[i]);
            }
            for(i=4;i>=0;i--)
            {
                printf("\n%d",b[i]);
            }
        }

    else if(choice == 10)
    {

        int num[20];
        int i, j, a, n;
        printf("enter number of elements in an array.\n");
        scanf("%d", &n);
        printf("Enter the elements.\n");
        for (i = 0; i < n; ++i)
        scanf("%d", &num[i]);
        for (i = 0; i < n; ++i)
        {
        for (j = i + 1; j < n; ++j)
        {
            if (num[i] > num[j])
            {
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
        
        printf("The numbers in ascending order is:");
        for (i = 0; i < n; ++i)
        {
        printf("\n%d", num[i]);
        }
        }       
    }
   
    
}
