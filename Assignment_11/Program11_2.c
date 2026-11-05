// WAP which accepts range from user and display all Even numbers in between that range

/*
    Input  :    23  35 
    Output :    24  26  28  30  32  34
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   RangeDisplayEven
//  Input           :   Integer, Integer
//  Output          :   All even integers between iStart and iEnd
//  Description     :   Displays all the Even numbers between the  given range
//  Date            :   5/11/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////////

void RangeDisplayEven (int iStart, int iEnd)
{
    int iCnt = 0;

    if (iStart > iEnd)
    {
        printf("Invalid Range");
        return;
    }

    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

///////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point : ");
    scanf("%d", &iValue1);
    
    printf("Enter Ending Point : ");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-----------------------------------------------------------------------------------------------------------
//             Input                Output
//-----------------------------------------------------------------------------------------------------------
//      Starting     Ending 
//-----------------------------------------------------------------------------------------------------------
//      23           35             24      26      28      30      32      34
//      10           18             10      12      14      16      18
//      10           10             10
//      21           21             ---------
//     -10           2              -10     -8      -6      -4      -2      0       2
//      90           18             Invalid Range
//     -7           -15             Invalid Range
//     -15          -7              -14     -12     -10     -8
//-----------------------------------------------------------------------------------------------------------
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////