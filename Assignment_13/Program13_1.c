// WAP which accept number from a user and return the count of even digits

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountEven
//  Input           :   Integer
//  Output          :   Integer (Count of Even Digits in a number)
//  Description     :   Counts even digits in a number 
//  Date            :   6/11/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////////////

int CountEven(int iNo)
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

        if ((iDigit % 2) == 0)
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

    iRet = CountEven(iValue);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//---------------------------------
//      Input       Output
//---------------------------------
//      2395        1
//      1018        2
//     -1018        2
//      8462        4
//     -216         2
//---------------------------------

///////////////////////////////////////////////////////////////////////////////////