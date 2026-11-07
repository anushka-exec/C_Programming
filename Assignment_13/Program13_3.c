// WAP which accept number from a user and return the count of digits in between 3 and 7

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountRange
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Accepts a number and Counts the digits between 3 and 7 
//  Date            :   6/11/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
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

        if ((iDigit >= 3) && (iDigit <= 7))
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

    iRet = CountRange(iValue);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//------------------------------------
//      Input           Output
//------------------------------------
//      2395            2
//      1018            0
//      4521            2            
//      9922            0
//     -436468          5
//------------------------------------

///////////////////////////////////////////////////////////////////////////////////