// WAP which accepts range from user and display all numbers in between that range in reverse order

/*
    Input  :    23  35 
    Output :    35      34      33      32      31      30      29      28      27      26      25    24       23
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   RangeDisplayRev
//  Input           :   Integer, Integer
//  Output          :   All integers between iStart and iEnd in reverse order
//  Description     :   Displays all the numbers between the  given range in reverse order
//  Date            :   5/11/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if (iStart > iEnd)
    {
        printf("Invalid Range");
        return;
    }

    for (iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t", iCnt);
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

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//--------------------------------------------------------------------------------------------------------------------------------------
//             Input                Output
//--------------------------------------------------------------------------------------------------------------------------------------
//      Starting     Ending 
//--------------------------------------------------------------------------------------------------------------------------------------
//      23           35             35      34      33      32      31      30      29      28      27      26      25    24       23
//      10           18             18      17      16      15      14      13      12      11      10
//      10           10             10
//     -10           2              2       1       0       -1      -2      -3      -4      -5      -6      -7      -8    -9       -10
//      90           18             Invalid Range
//     -7           -15             Invalid Range
//     -15          -7              -7      -8      -9      -10     -11     -12     -13     -14     -15
//-------------------------------------------------------------------------------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////