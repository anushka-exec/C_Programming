//WAP to accept number from a user and print number of $ & * 
//Input : 5
//Output: $   *   $   *   $   *   $   *   $   *
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   displayPattern
//  Input           :   Integer
//  Output          :   Display $ & *
//  Description     :   Print pattern of accepeted numbers as $ and *
//  Date            :   31/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void displayPattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
    printf("\n");
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter frequency : ");
    scanf("%d", &iValue);

    displayPattern(iValue);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//---------------------------------------------------------------------------------------------------------------
//      Input                                               Output
//---------------------------------------------------------------------------------------------------------------
//      Frequency:5                 $       *       $       *       $       *       $       *       $       *
//      Frequency:3                 $       *       $       *       $       *
//      Frequency:-3                $       *       $       *       $       * 
//      Frequency:-2                $       *       $       *
//---------------------------------------------------------------------------------------------------------------
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////