// WAP which accepts number of rows and number of columns from user and display below pattern

/*
    Input  :    iRow = 4       iCol = 4
    Output :    1   1   1   1
                2   2   2   2
                3   3   3   3
                4   4   4   4
*/

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern 
//  Input           :   Integer, Integer (iRow, iCol)
//  Output          :   Displays Number Pattern
//  Description     :   Accepts rows and columns and displays each row number repeatedly
//                      across the columns
//  Date            :   17/11/2026
//  Author          :   Anushka Anil Harpale
//
//////////////////////////////////////////////////////////////////////////////////////////////


void Pattern (int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNo = 0;

    for (i = 1; i <= iRow; i++)
    {
        iNo = i;

        for (j = 1; j <= iCol; j++)
        {
            printf("%d\t", iNo);
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
/*      4   4           1       1       1       1
                        2       2       2       2
                        3       3       3       3
                        4       4       4       4
                                    
                        
        4   3           1       1       1
                        2       2       2
                        3       3       3
                        4       4       4


        3   6           1       1       1       1       1       1
                        2       2       2       2       2       2
                        3       3       3       3       3       3
*/         
//-----------------------------------------------------------------------------
//////////////////////////////////////////////////////////////////////////////////////////////