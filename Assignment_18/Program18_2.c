// WAP which accepts number of rows and number of columns from user and display below pattern

/*
    Input  :    iRow = 4       iCol = 4
    Output :    *   *   *   *
                *   *   *   #
                *   *   #   #
                *   #   #   #         
*/

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern 
//  Input           :   Integer, Integer (iRow, iCol)
//  Output          :   Displays Character Pattern
//  Description     :   Accepts the number of rows and columns from the user and displays the
//                      given pattern of '*' and '#' characters
//  Date            :   15/11/2026
//  Author          :   Anushka Anil Harpale
//
//////////////////////////////////////////////////////////////////////////////////////////////


void Pattern (int iRow, int iCol)
{
    int i = 0, j = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (i + j <= iRow + 1)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
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
/*      4   4           *       *       *       *
                        *       *       *       #
                        *       *       #       #
                        *       #       #       #
               
                        
        5   5           *       *       *       *       *
                        *       *       *       *       #
                        *       *       *       #       #
                        *       *       #       #       #
                        *       #       #       #       #


        4   5           *       *       *       *       #
                        *       *       *       #       #
                        *       *       #       #       #
                        *       #       #       #       #
                        

        5   4           *       *       *       *
                        *       *       *       *
                        *       *       *       #
                        *       *       #       #
                        *       #       #       #
*/         
//-----------------------------------------------------------------------------
//////////////////////////////////////////////////////////////////////////////////////////////