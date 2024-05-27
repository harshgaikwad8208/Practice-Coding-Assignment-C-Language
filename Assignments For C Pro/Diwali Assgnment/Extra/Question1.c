// Find the maximum odd number in the given array.

#include <stdio.h> 
int main() 
{
    int arr[] = {2, 5, 8, 3, 12, 7, 9, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxOdd = findMaxOdd(arr, size);

    if (maxOdd != -1) 
    {
        printf("The maximum odd number in the array is: %d\n", maxOdd);
    } 
    else 
    {
        printf("No odd numbers found in the array.\n");
    }

    return 0;
}

int findMaxOdd(int arr[], int size) 
{
    int maxOdd = -1;  
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] % 2 != 0 && arr[i] > maxOdd) 
        {
            maxOdd = arr[i];
        }
    }

    return maxOdd;
}
