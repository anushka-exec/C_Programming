// WAP which accept number from a user and return difference bewtween summation of all its factors and non factors

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FactDiff
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Returns the difference between sum of factors and non-factors of a number
//  Date            :   9/11/2026
//  Author          :   Anushka Anil Harpale
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFact = 0, iNonFact = 0, iDiff = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iFact = iFact + iCnt;
        }
        else
        {
            iNonFact = iNonFact + iCnt;
        }
    }

    iDiff = iFact - iNonFact;

    return iDiff;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("Difference is : %d\n", iRet);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the Program
//      Tested test cases
//---------------------------------------------------------------------------------------------------
//      Input         Output
//---------------------------------------------------------------------------------------------------
//       12           Difference is : -34
//       10           Difference is : -29
//      -10           Difference is : -29  
//      -14           Difference is : -71
//       20           Difference is : -146
//---------------------------------------------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////////////////////////////////////////