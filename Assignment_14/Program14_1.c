// WAP which accept number from a user and display its multiplication of factors

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   MultFact
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Accept a number, find its factors and display their product
//  Date            :   9/11/2026
//  Author          :   Anushka Anil Harpale
//
////////////////////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;           // Factors (excluding the number)
        }
    }

    return iMult ;
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors of %d is : %d\n", iValue, iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the Program
//      Tested test cases
//----------------------------------------------------------------------------------------------
//      Input         Output
//----------------------------------------------------------------------------------------------
//       12           Multiplication of factors of 12 is : 144
//       13           Multiplication of factors of 13 is : 1
//       10           Multiplication of factors of 10 is : 10         
//      -10           Multiplication of factors of -10 is : 10
//      -30           Multiplication of factors of -30 is : 27000
//----------------------------------------------------------------------------------------------
//
////////////////////////////////////////////////////////////////////////////////////////////////