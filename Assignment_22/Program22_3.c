// WAP which accepts number from user and display below pattern

/*
    Input  :    5
    Output :    1   *   2   *   3   *   4   *   5   *
*/

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern 
//  Input           :   Integer
//  Output          :   Integer and Character
//  Description     :   Accepts a number from the user and displays an increasing number 
//                      pattern with * character after each number
//  Date            :   18/11/2026
//  Author          :   Anushka Anil Harpale
//
//////////////////////////////////////////////////////////////////////////////////////////////


void Pattern (int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t*\t", iCnt);
    }
}


//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
//////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;

    printf("Enter Number of Elements : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}


//////////////////////////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------------------------
//      Input       Output
//-------------------------------------------------------------------------------------------
//      5           1       *       2       *       3       *       4       *       5       *
//      3           1       *       2       *       3       *
//      -4          1       *       2       *       3       *       4       *
//-------------------------------------------------------------------------------------------
//
//////////////////////////////////////////////////////////////////////////////////////////////