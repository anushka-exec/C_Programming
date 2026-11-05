// WAP which accept number from a user and Count frequency of 4 in it

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountFour
//  Input           :   Integer
//  Output          :   Integer (Frequenc of 4 in a Number)
//  Description     :   Counts the Frequency of 4 in a Number
//  Date            :   5/11/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit == 4)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = CountFour(iValue);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//---------------------------------------------------------------------------------------------------------------
//      Input       Output
//---------------------------------------------------------------------------------------------------------------
//      2395        0
//      1018        0
//      9440        2
//      -444        3
//      -216        0
//      922432      1
//      0           0
//---------------------------------------------------------------------------------------------------------------
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////