// WAP which accepts number from user and display below pattern

/*
    Input  :    8
    Output :    2   4   6   8   10  12  14  16
*/

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern 
//  Input           :   Integer
//  Output          :   Integers
//  Description     :   Accepts a number from the user and displays the first 'N' even numbers
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

    for (iCnt = 1; iCnt <= iNo; iCnt++)         // Time Complexity: O(N)
    {
        printf("%d\t", iCnt * 2);        
    }

    /*
        for(iCnt = 1; iCnt <= (iNo * 2); iCnt++)        // Time Complexity: O(2N) = O(N)
        {
            if((iCnt % 2) == 0)
            {
                printf("%d\t", iCnt);
            }
        }
    */
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
//      8           2       4       6       8       10      12      14      16
//      5           2       4       6       8       10
//      -6          2       4       6       8       10      12
//-------------------------------------------------------------------------------------------
//
//////////////////////////////////////////////////////////////////////////////////////////////