//WAP to find factorial of given number
//Input : 5       Otuput : 120
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Factorial
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Accept digit number and print factorical of it.
//  Date            :   31/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorical of : %d", iRet);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////
//      Tested test cases
//----------------------------------------------------
//      Input               Output
//----------------------------------------------------
//      5                   120
//     -5                   120
//      4                   24
//----------------------------------------------------
//////////////////////////////////////////////////////