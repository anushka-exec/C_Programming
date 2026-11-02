//WAP to find even factorial of given number
//Input : 5       Otuput : 8
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   EvenFactorial
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Accept digit number and even factorial of it.
//  Date            :   1/11/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {   
        if((iCnt % 2) == 0)    
        {
            iFact = iFact * iCnt;
        }
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

    iRet = EvenFactorial(iValue);

    printf("Even Factorical are : %d", iRet);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////
//      Tested test cases
//----------------------------------------------------
//      Input               Output
//----------------------------------------------------
//      5                     8
//     -5                     8
//     10                    3840
//----------------------------------------------------
//////////////////////////////////////////////////////