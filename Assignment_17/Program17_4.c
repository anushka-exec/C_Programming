// WAP which accepts number of rows and number of columns from user and display below pattern

/*
    Input  :    iRow = 5       iCol = 5
    Output :    1       2       3       4       5
               -1      -2      -3      -4      -5
                1       2       3       4       5 
               -1      -2      -3      -4      -5
                1       2       3       4       5
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern 
//  Input           :   Integer, Integer (iRow, iCol)
//  Output          :   Integer
//  Description     :   Displays the given Number pattern 
//  Date            :   11/11/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////////


void Pattern (int iRow, int iCol)
{
    int i = 0, j = 0;

    int iNo = 0;

    for (i = 1; i <= iRow; i++)
    {
        if ((i % 2) != 0)                       // odd row
        {
            for (j = 1, iNo = 1; j <= iCol; j++)
            { 
                printf("%d\t", iNo);
                iNo++;
            }
        }
        else                                    // even row
        {
            for (j = 1, iNo = -1; j <= iCol; j++)
            { 
                printf("%d\t", iNo);
                iNo--;
            }
            
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
/*      5   5           1       2       3       4       5
                       -1      -2      -3      -4      -5
                        1       2       3       4       5 
                       -1      -2      -3      -4      -5
                        1       2       3       4       5
               
                        
        5   3           1       2       3
                       -1      -2      -3
                        1       2       3
                       -1      -2      -3
                        1       2       3
*/         
//-----------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////////