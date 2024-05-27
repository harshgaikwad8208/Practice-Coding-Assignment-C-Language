// Accept Bill Amount & calculate 18% GST Amount & final Amount.

#include <stdio.h>

int main() 
{
    float billAmount, gstRate, gstAmount, finalAmount;

    printf("Enter the bill amount: ");
    scanf("%f", &billAmount);

    gstRate = 0.18;

    gstAmount = billAmount * gstRate;

    finalAmount = billAmount + gstAmount;

    printf("\nBill Amount: Rs. %.2f\n", billAmount);
    printf("GST Amount (18%%): Rs. %.2f\n", gstAmount);
    printf("Final Amount: Rs. %.2f\n", finalAmount);

    return 0;
}
