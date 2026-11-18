// WAP which accepts number of rows and number of columns from user and display below pattern

/*
    Input  :    iRow = 3       iCol = 5
    Output :    5   4   3   2   1
                5   4   3   2   1
                5   4   3   2   1
*/

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern 
//  Input           :   Integer, Integer (iRow, iCol)
//  Output          :   Displays Number Pattern
//  Description     :   Accepts rows and columns from the user and displays a
//                      rectangular pattern of numbers in descending order from the specified
//                      number of columns to 1
//  Date            :   17/11/2026
//  Author          :   Anushka Anil Harpale
//
//////////////////////////////////////////////////////////////////////////////////////////////


void Pattern (int iRow, int iCol)
{
    int i = 0, j = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = iCol; j > 0; j--)
        {
            printf("%d\t", j);
        }
        
        printf("\n");
    }
}


//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows and Columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}


//////////////////////////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-----------------------------------------------------------------------------
//      Input                Output
//-----------------------------------------------------------------------------
/*      3   5           5       4       3       2       1
                        5       4       3       2       1
                        5       4       3       2       1
                                    
                        
        5   4           4       3       2       1
                        4       3       2       1
                        4       3       2       1
                        4       3       2       1
                        4       3       2       1
*/         
//-----------------------------------------------------------------------------
//////////////////////////////////////////////////////////////////////////////////////////////