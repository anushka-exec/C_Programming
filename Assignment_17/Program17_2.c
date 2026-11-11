// WAP which accepts number of rows and number of columns from user and display below pattern

/*
    Input  :    iRow = 4        iCol = 5
    Output :    2   4   6   8   10 
                1   3   5   7   9
                2   4   6   8   10
                1   3   5   7   9 
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern 
//  Input           :   Integer, Integer (iRow, iCol)
//  Output          :   Integer
//  Description     :   Displays the given Number pattern 
//  Date            :   10/11/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////////


void Pattern (int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNo = 0;

    for (i = 1; i <= iRow; i++)
    {
        if ((i % 2) != 0)       // Odd row
        {
            iNo = 2;
        }
        else                    // Even Row
        {
            iNo = 1;
        }

        for (j = 1; j <= iCol; j++)
        {           
            printf("%d\t", iNo);
            iNo = iNo + 2;
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
/*      4   5           2       4       6       8       10
                        1       3       5       7       9
                        2       4       6       8       10
                        1       3       5       7       9

               
                        
        5   4           2       4       6       8
                        1       3       5       7
                        2       4       6       8
                        1       3       5       7
                        2       4       6       8


        3   4           2       4       6       8       10
                        1       3       5       7       9
                        2       4       6       8       10


        5   5           2       4       6       8       10
                        1       3       5       7       9
                        2       4       6       8       10
                        1       3       5       7       9
                        2       4       6       8       10
*/         
//-----------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////////