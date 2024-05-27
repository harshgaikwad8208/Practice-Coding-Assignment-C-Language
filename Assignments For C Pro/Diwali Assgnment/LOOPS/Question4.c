//Display 1, 4, 10, 22, 46, 94……such series.

#include <stdio.h>

int main() 
{
    // Display terms of the series
    for (int n = 0; n < 10; ++n) 
    {
        int term = (1 << n) - 2;
        printf("%d ", term);
    }

    return 0;
}
