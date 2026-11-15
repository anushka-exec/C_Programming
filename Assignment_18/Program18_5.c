// WAP which accepts number of rows and number of columns from user and display below pattern

/*
    Input  :    iRow = 4       iCol = 4
    Output :    1   2   3   4
                1   *   *   4 
                1   *   *   4
                1   2   3   4 
*/

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern 
//  Input           :   Integer, Integer (iRow, iCol)
//  Output          :   Displays Number and Character Pattern
//  Description     :   Displays a hollow rectangle using numbers and '*' characters
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
            if((i == 1) || (i == iRow) || (j == 1) || (j == iCol))          
            {
                printf("%d\t", j);
            }
            else
            {
                printf("*\t");
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
/*      4   4           1       2       3       4
                        1       *       *       4
                        1       *       *       4
                        1       2       3       4
               
                        
        6   6           1       2       3       4       5       6
                        1       *       *       *       *       6
                        1       *       *       *       *       6
                        1       *       *       *       *       6
                        1       *       *       *       *       6
                        1       2       3       4       5       6


        4   3           1       2       3
                        1       *       3
                        1       *       3
                        1       2       3
                        
    
        3   4           1       2       3       4
                        1       *       *       4
                        1       2       3       4
*/         
//-----------------------------------------------------------------------------
//////////////////////////////////////////////////////////////////////////////////////////////
