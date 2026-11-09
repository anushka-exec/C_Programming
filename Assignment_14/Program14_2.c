// WAP which accept number from a user and display its factors is decreasing order

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FactRev
//  Input           :   Integer
//  Output          :   Integers
//  Description     :   Displays factors of a number in reverse order, excluding the number itself.
//  Date            :   9/11/2026
//  Author          :   Anushka Anil Harpale
//
////////////////////////////////////////////////////////////////////////////////////////////////

void FactRev (int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = iNo - 1; iCnt >= 1; iCnt--)
    {
        if ((iNo % iCnt) == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the Program
//      Tested test cases
//----------------------------------------------------------------------------------------------
//      Input         Output
//----------------------------------------------------------------------------------------------
//       12           6       4       3       2       1
//       13           1
//       10           5       2       1       
//      -10           5       2       1
//      -34           17      2       1
//      -26           13      2       1
//----------------------------------------------------------------------------------------------
//
////////////////////////////////////////////////////////////////////////////////////////////////