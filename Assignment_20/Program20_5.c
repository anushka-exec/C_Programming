// WAP which accepts number of rows and number of columns from user and display below pattern

/*
    Input  :    iRow = 5       iCol = 5

    Output :    1   2   3   4   5
                1   2           5
                1       3       5
                1           4   5
                1   2   3   4   5 
*/

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern 
//  Input           :   Integer, Integer (iRow, iCol)
//  Output          :   Displays Number Pattern
//  Description     :   Displays a number pattern using column values along the boundaries
//                      and primary diagonal
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

            if( i == 1 || i == iRow || j == 1 || j == iCol || i == j)
            {
                printf("%d\t", j);
            }
            else                        
            {
                printf("\t");
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