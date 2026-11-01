// WAP to accept total purchase amount and calculate the final payable amount after applying following discount 
// Negative purchase amounts are invalid.

/*
    ------------------------------------------------
        Purchase Amount                 Discount
    ------------------------------------------------
        Below Rps 1000                    0 %
        Rps 1000 to below Rps 5000        10 %
        Rps 5000 and Above                20 %
    ------------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CalculateDiscount
//  Input           :   Float
//  Output          :   Float 
//  Description     :   Calculate final Payable amount after applying discount
//  Date            :   21/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount <= 1000)
    {
        fFinalAmount = fAmount;
    }
    else if ((fAmount > 1000) && (fAmount <= 5000))
    {
        fDiscount = (fAmount * 10) / 100;
        fFinalAmount = fAmount - fDiscount;
    }
    else
    {
        fDiscount = (fAmount * 20) / 100;
        fFinalAmount = fAmount - fDiscount;
    }

    printf("Final Payable amount is : %.2f\n", fFinalAmount);
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount : ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//      Input                       Output
//-------------------------------------------------------------------------
//      800            Final Payable amount is : 800.00
//      2500           Final Payable amount is : 2250.00
//      7000           Final Payable amount is : 5600.00
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////