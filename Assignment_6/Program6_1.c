// WAP to calculate electricity bill
/*
    Accept the number of electricty units consumed and calculate the total bill using the followingslab-wise rate.
    ------------------------------------------------
        Units consumed         Rate
    ------------------------------------------------
        First 100 units         Rps 5 per unit
        Next 100 units          Rps 7 per unit
        Above 200 units         Rps 10 per unit
    ------------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CalculateElectricityBill
//  Input           :   Integer
//  Output          :   Float
//  Description     :   Calculate electricity bill for defined units consumed
//  Date            :   21/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if (iUnits <= 100)
    {
        fBill = iUnits * 5;                                 // the first 100 units must still be charged at ₹5 per unit. Only the remaining units are charged at ₹7
        printf("Bill is : %.2f\n", fBill);              
    }

    else if ((iUnits >= 100) && (iUnits <= 200))
    {
        fBill = (100 * 5) + ((iUnits - 100) * 7);           // The first 100 units cost ₹5 each, the next 100 cost ₹7 each, and only the remaining units cost ₹10 each
        printf("Bill is : %.1f\n", fBill);             
    }

    else 
    {
        fBill = (100 * 5) + (100 * 7) + ((iUnits - 200) * 10);
        printf("Bill is : %f\n", fBill);
    }
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iUnits = 0;

    printf("Enter consumed units : ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//      Input           Output
//-------------------------------------------------------------------------
//        80            Bill is : 400.00
//        150           Bill is : 850.0
//        250           Bill is : 2500.000000
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////