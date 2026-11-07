// WAP which accept number from a user and return difference between summation of Even digits and summation of Odd digits

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountDiff
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Calculates difference between summation of Even digits and summation of Odd digits in a number
//  Date            :   6/11/2026
//  Author          :   Anushka Anil Harpale
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0, iOddSum = 0;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if ((iDigit % 2) == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }

        iNo = iNo / 10;
    }

    iDiff = iEvenSum - iOddSum;

    return iDiff;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("Difference between summation of Even digits and summation of Odd digits is : %d\n", iRet);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the Program
//      Tested test cases
//-----------------------------------------------------------------------------------------------------------------------
//      Input           Output
//-----------------------------------------------------------------------------------------------------------------------
//      2395            Difference between summation of Even digits and summation of Odd digits is : -15
//      1018            Difference between summation of Even digits and summation of Odd digits is : 6
//      8440            Difference between summation of Even digits and summation of Odd digits is : 16          
//      5733            Difference between summation of Even digits and summation of Odd digits is : -18
//     -4300            Difference between summation of Even digits and summation of Odd digits is : 1
//-----------------------------------------------------------------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////