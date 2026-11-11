// WAP which accepts number of rows and number of columns from user and display below pattern

/*
    Input  :    iRow = 4        iCol = 5
    Output :    4   4   4   4   4
                3   3   3   3   3
                2   2   2   2   2
                1   1   1   1   1
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern 
//  Input           :   Integer, Integer (iRow, iCol)
//  Output          :   Integer
//  Description     :   Displays the given Number pattern row-wise
//  Date            :   10/11/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////////


void Pattern (int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = iRow; i > 0; i--)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%d\t", i);
        }

        printf("\n");
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

    printf("Enter Number of Rows and Columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}


///////////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-----------------------------------------------------------------------------
//      Input                Output
//-----------------------------------------------------------------------------
/*      4   5           4       4       4       4       4
                        3       3       3       3       3
                        2       2       2       2       2
                        1       1       1       1       1
               
                        
        5   4           5       5       5       5
                        4       4       4       4
                        3       3       3       3
                        2       2       2       2
                        1       1       1       1


        3   3           3       3       3
                        2       2       2
                        1       1       1
*/         
//-----------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////////