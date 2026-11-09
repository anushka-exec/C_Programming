// WAP which accept number from a user and return summation of all its non factors

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   SumNonFact
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Displays sum of all non factors of a number
//  Date            :   9/11/2026
//  Author          :   Anushka Anil Harpale
//
////////////////////////////////////////////////////////////////////////////////////////////////

int SumNonFact (int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
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

    iRet = SumNonFact(iValue);

    printf("Summation of non factors is : %d\n", iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the Program
//      Tested test cases
//----------------------------------------------------------------------------------------------
//      Input         Output
//----------------------------------------------------------------------------------------------
//       12           Summation of non factors is : 50
//       10           Summation of non factors is : 37
//      -10           Summation of non factors is : 37   
//      -14           Summation of non factors is : 81
//----------------------------------------------------------------------------------------------
//
////////////////////////////////////////////////////////////////////////////////////////////////