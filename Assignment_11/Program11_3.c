// WAP which accepts range from user and return addition of all numbers in between that range (Range should contains positive numbers only)

/*
    Input  :    23  30 
    Output :    212
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   RangeSum
//  Input           :   Integer, Integer
//  Output          :   Integer (Addition of all even integers between iStart and iEnd)
//  Description     :   Displays Sum all the Even numbers between the  given range
//  Date            :   5/11/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if ( (iStart > iEnd) || ((iStart <= 0) || (iEnd <= 0)) )
    {
        return -1;
    }

    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {    
        iSum = iSum + iCnt;
    }

    return iSum;
}

///////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting Point : ");
    scanf("%d", &iValue1);
    
    printf("Enter Ending Point : ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if (iRet == -1)
    {
        printf("Invalid Range\n");
    }
    else 
    {
        printf("Addition is %d", iRet);
    }
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//---------------------------------------------------------
//             Input                Output
//---------------------------------------------------------
//      Starting     Ending 
//---------------------------------------------------------
//      23           30             Addition is : 212
//      10           18             Addition is : 126      
//     -10           2              Invalid Range
//      21           21             Addition is : 21  
//      90           18             Invalid Range
//      0            0              Invalid Range
//----------------------------------------------------------
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////