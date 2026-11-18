// WAP which accepts number from user and display below pattern

/*
    Input  :    5
    Output :    5   #   4   #   3   #   2   #   1   #
*/

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern 
//  Input           :   Integer
//  Output          :   Integer and Character
//  Description     :   Accepts a number from the user and displays a reverse number pattern
//                      with # character after each number
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

    for (iCnt = iNo; iCnt > 0 ; iCnt--)
    {
        printf("%d\t#\t", iCnt);
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
//      5           5       #       4       #       3       #       2       #       1       #
//      3           3       #       2       #       1       #
//      -4          4       #       3       #       2       #       1       #
//-------------------------------------------------------------------------------------------
//
//////////////////////////////////////////////////////////////////////////////////////////////