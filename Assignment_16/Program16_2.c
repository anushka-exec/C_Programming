// WAP which accepts number of rows and number of columns from user and display below pattern

/*
    Input  :    iRow = 4        iCol = 4
    Output :    A   B   C   D
                a   b   c   d
                A   B   C   D
                a   b   c   d
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern 
//  Input           :   Integer, Integer (iRow, iCol)
//  Output          :   Character
//  Description     :   Displays alternate Uppercase and Lowercase characters
//  Date            :   10/11/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////////


void Pattern (int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for (i = 1; i <= iRow; i++)
    {
        if ((i % 2) != 0)
        {
            ch = 'A';
        }
        else
        {
            ch = 'a';
        }

        for (j = 1; j <= iCol; j++)
        {
            printf("%c\t", ch);
            ch++;
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
/*      4   4           A       B       C       D
                        a       b       c       d
                        A       B       C       D
                        a       b       c       d


        5   4           A       B       C       D
                        a       b       c       d
                        A       B       C       D
                        a       b       c       d
                        A       B       C       D


        5   5           A       B       C       D       E
                        a       b       c       d       e
                        A       B       C       D       E
                        a       b       c       d       e
                        A       B       C       D       E
*/         
//-----------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////////