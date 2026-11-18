// WAP which accepts number of rows and number of columns from user and display below pattern

/*
    Input  :    iRow = 6       iCol = 6

    Output :    *   *   *   *   *   *
                *   #   #   #   *   *
                *   #   #   *   $   *
                *   #   *   $   $   *
                *   *   $   $   $   *
                *   *   *   *   *   * 
*/

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern 
//  Input           :   Integer, Integer (iRow, iCol)
//  Output          :   Displays Pattern
//  Description     :   Displays a square pattern using '*' along the boundaries and
//                      secondary diagonal, '#' above the secondary diagonal and
//                      '$' below the secondary diagonal
//  Date            :   16/11/2026
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

            if( i == 1 || i == iRow || j == 1 || j == iCol || i+j == iCol + 1)
            {
                printf("*\t");
            }

            else if (i+j < iCol + 1)
            {
                printf("#\t");
            }

            else                        // if ( i+j > iCol + 1)
            {
                printf("$\t");
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
/*      6   6           *       *       *       *       *       *
                        *       #       #       #       *       *
                        *       #       #       *       $       *
                        *       #       *       $       $       *
                        *       *       $       $       $       *
                        *       *       *       *       *       *

     
        4   4           *       *       *       *
                        *       #       *       *
                        *       *       $       *
                        *       *       *       *
                                                                    

        8   8           *       *       *       *       *       *       *       *
                        *       #       #       #       #       #       *       *
                        *       #       #       #       #       *       $       *
                        *       #       #       #       *       $       $       *
                        *       #       #       *       $       $       $       *
                        *       #       *       $       $       $       $       *
                        *       *       $       $       $       $       $       *
                        *       *       *       *       *       *       *       *
*/         
//-----------------------------------------------------------------------------
//////////////////////////////////////////////////////////////////////////////////////////////