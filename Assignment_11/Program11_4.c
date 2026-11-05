// WAP which accepts range from user and return addition of all even numbers in between that range (Range should contains positive numbers only)

/*
    Input  :    23  30 
    Output :    108
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   RangeSumEven
//  Input           :   Integer, Integer
//  Output          :   Integer (Addition of all even integers between iStart and iEnd)
//  Description     :   Displays Sum all the Even numbers between the  given range
//  Date            :   5/11/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////////////

int RangeSumEven (int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if ( (iStart > iEnd) || ((iStart <= 0) || (iEnd <= 0)) )
    {
        return -1;
    }

    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    { 
        if ((iCnt % 2) == 0)   
        {
            iSum = iSum + iCnt;
        }
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

    iRet = RangeSumEven(iValue1, iValue2);

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
//      23           30             Addition is : 108
//      10           18             Addition is : 70     
//     -10           2              Invalid Range
//      90           18             Invalid Range
//      21           21             Addition is : 0  
//      4            4              Addition is : 4
//      0            0              Invalid Range
//----------------------------------------------------------
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////