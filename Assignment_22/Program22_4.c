// WAP which accepts number from user and display below pattern

/*
    Input  :    4
    Output :    #   1   *   #   2   *  #   3   *  #   4   *  
*/

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern 
//  Input           :   Integer
//  Output          :   Integer and Characters
//  Description     :   Accepts a number from the user and displays an increasing number pattern
//                      with # before and * after each number
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
        printf("#\t%d\t*\t", iCnt);
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
//      4           #       1       *       #       2       *       #       3       *       #       4       *
//      3           #       1       *       #       2       *       #       3       *
//      -2          #       1       *       #       2       *
//-------------------------------------------------------------------------------------------
//
//////////////////////////////////////////////////////////////////////////////////////////////