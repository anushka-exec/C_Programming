//WAP to accept number from user and display its table
//Input : 2       
//Output : 2    4   6   8   10  12  14  16  18  20
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Table
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Accept digit number and display its table
//  Date            :   31/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////
//      Tested test cases
//----------------------------------------------------
//      Input               Output
//----------------------------------------------------
//      2                   2       4       6       8       10      12      14      16      18      20
//     -2                   2       4       6       8       10      12      14      16      18      20
//      3                   3       6       9       12      15      18      21      24      27      30
//----------------------------------------------------
//////////////////////////////////////////////////////