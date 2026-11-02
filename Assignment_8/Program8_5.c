//WAP to accept number from user and display its table in reverse order
//Input : 2       
//Output : 20      18      16      14      12      10      8       6       4       2
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   TableRev
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Accept digit number and display its table in reverse order
//  Date            :   31/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
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

    TableRev(iValue);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////
//      Tested test cases
//----------------------------------------------------
//      Input               Output
//----------------------------------------------------
//      2                   20      18      16      14      12      10      8       6       4       2
//     -2                   20      18      16      14      12      10      8       6       4       2
//      5                   50      45      40      35      30      25      20      15      10      5
//     -5                   50      45      40      35      30      25      20      15      10      5
//----------------------------------------------------
//////////////////////////////////////////////////////