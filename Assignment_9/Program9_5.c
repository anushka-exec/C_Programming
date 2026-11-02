//WAP which returns difference between even factorial & odd factorial of given number
//Input : 5       Otuput : -7
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FactorialDiff
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Accept digit number and odd factorial of it.
//  Date            :   1/11/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    int iAns = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {   
        if((iCnt % 2) == 0)    
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }     
    iAns = iEvenFact - iOddFact;
    
    return iAns;
    
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

    iRet = FactorialDiff(iValue);

    printf("Difference of Even Odd Factorical is : %d", iRet);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////
//      Tested test cases
//----------------------------------------------------
//      Input               Output
//----------------------------------------------------
//      5                     -7
//     -5                     -7
//     10                    2895
//----------------------------------------------------
//////////////////////////////////////////////////////