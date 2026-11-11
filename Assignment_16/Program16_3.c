// WAP which accepts number of rows and number of columns from user and display below pattern

/*
    Input  :    iRow = 3        iCol = 5
    Output :    A   A   A   A   A
                B   B   B   B   B
                C   C   C   C   C
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern 
//  Input           :   Integer, Integer (iRow, iCol)
//  Output          :   Character
//  Description     :   Displays alphabets row-wise
//  Date            :   10/11/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////////


void Pattern (int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1, ch = 'A'; i <= iRow; i++, ch++)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%c\t", ch);
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
/*      3   5           A       A       A       A       A
                        B       B       B       B       B
                        C       C       C       C       C
                       
                        
        5   3           A       A       A
                        B       B       B
                        C       C       C
                        D       D       D
                        E       E       E


        4   4           A       A       A       A
                        B       B       B       B
                        C       C       C       C
                        D       D       D       D
*/         
//-----------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////////