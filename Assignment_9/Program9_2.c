//WAP to accept US dollar and return its corresponding value in Indian currency
//Input : 10
//Output : 700
#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DollarToINR
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Accept number in US dollar and return its corresponding value in INR 
//  Date            :   1/11/2026
//  Author          :   Anushka Anil Harpale
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{ 
    int iAns = 0;
    int iRupees = 70;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iAns = iNo * iRupees;

    return iAns;       
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is : %d\t",iRet);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//--------------------------------------------------------------------------------
//      Input                Output
//--------------------------------------------------------------------------------
//      7                     490
//      10                    700
//      3                     210
//      1200                  84000  
//----------------------------------------------------------------------------------
////////////////////////////////////////////////////////////////////////////////////