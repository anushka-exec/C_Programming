// WAP which accept number from a user and return multiplication of all digits

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountRange
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Accepts a number and returns multiplication of all digits
//  Date            :   6/11/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit != 0)
        {
            iMult = iMult * iDigit;
        }

        iNo = iNo / 10;
    }

    return iMult;
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

    printf("Enter a number : ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of all the digits is : %d\n", iRet);
}

///////////////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//---------------------------------------------------------------------------------
//      Input           Output
//---------------------------------------------------------------------------------
//      2395            Multiplication of all the digits is : 270
//      1018            Multiplication of all the digits is : 8
//      9440            Multiplication of all the digits is : 144            
//      922432          Multiplication of all the digits is : 864
//     -4300            Multiplication of all the digits is : 12
//---------------------------------------------------------------------------------

///////////////////////////////////////////////////////////////////////////////////