// WAP which accept number from a user and Count frequency of such a digits which are less than 6

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Count
//  Input           :   Integer
//  Output          :   Integer (Frequenc of digites less than 6 in a Number)
//  Description     :   Counts the Frequency of such digits which are less than 6
//  Date            :   5/11/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////////////

int Count(int iNo)
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

        if (iDigit < 6)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = Count(iValue);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//---------------------------------------------------------------------------------------------------------------
//      Input       Output
//---------------------------------------------------------------------------------------------------------------
//      2395        3
//      1018        3
//      9440        3
//      -444        3
//      -216        2
//      96672       1
//      0           0
//---------------------------------------------------------------------------------------------------------------
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////