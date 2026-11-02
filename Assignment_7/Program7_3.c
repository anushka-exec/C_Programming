//WAP to accept nuber from a user and print its numbers line
//Input : 4
//Output: -4        -3      -2      -1      0       1       2       3       4
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   displayPattern
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Print pattern of accepeted number and print number line
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

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
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
//      Input                               Output
//---------------------------------------------------------------------------------------------------------------
//      Frequency:4                 -4      -3      -2      -1      0       1       2       3       4
//      Frequency:5                 -5      -4      -3      -2      -1      0       1       2       3       4       5
//      Frequency:-3                -3      -2      -1      0       1       2       3
//      Frequency:-2                -2      -1      0       1       2
//---------------------------------------------------------------------------------------------------------------
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////