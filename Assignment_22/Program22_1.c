// WAP which accepts number from user and display below pattern

/*
    Input  :    5
    Output :    A   B   C   D   E
*/

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern 
//  Input           :   Integer
//  Output          :   Characters
//  Description     :   Accepts a number from the user and displays an alphabet pattern
//  Date            :   18/11/2026
//  Author          :   Anushka Anil Harpale
//
//////////////////////////////////////////////////////////////////////////////////////////////


void Pattern (int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t", ch);
    }
   
}


//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
//////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;

    printf("Enter Number of Elements : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}


//////////////////////////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------------------------
//      Input       Output
//-------------------------------------------------------------------------------------------
//      5           A       B       C       D       E
//      3           A       B       C
//      -4          A       B       C       D
//      -8          A       B       C       D       E       F       G       H
//-------------------------------------------------------------------------------------------
//
//////////////////////////////////////////////////////////////////////////////////////////////