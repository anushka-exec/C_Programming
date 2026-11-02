//WAP to accept nuber from a user and print number till that number 
//Input : 8
//Output: 1     2       3       4       5       6       7       8
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   displayPattern
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Print pattern of accepeted number
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
//      Frequency:4                 1       2       3       4
//      Frequency:5                 1       2       3       4       5       6       7       8
//      Frequency:-3                1       2       3 
//      Frequency:-2                1       2
//---------------------------------------------------------------------------------------------------------------
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////