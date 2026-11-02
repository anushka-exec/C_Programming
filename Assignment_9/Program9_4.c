//WAP to find odd factorial of given number
//Input : 5       Otuput : 15
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   OddFactorial
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Accept digit number and odd factorial of it.
//  Date            :   1/11/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {   
        if(!(iCnt % 2) == 0)    
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

    iRet = OddFactorial(iValue);

    printf("Odd Factorical are : %d", iRet);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////
//      Tested test cases
//----------------------------------------------------
//      Input               Output
//----------------------------------------------------
//      5                     15
//     -5                     15
//     10                    945
//     12                   10395
//----------------------------------------------------
//////////////////////////////////////////////////////