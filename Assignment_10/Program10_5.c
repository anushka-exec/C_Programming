//WAP which accept area in square feet and convert it into square meter
/* 1 square feet  = 0.0929 Square meter
Input : 5      
Output : 0.464515
*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   SquareMeter
//  Input           :   Integer
//  Output          :   Double
//  Description     :   Accept area in square and convert it into square meter
//  Date            :   1/11/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{ 
    double dMeter = 0.0;
    float fSquareFeet = 0.0929f;

    dMeter = iValue * 0.0929f;   

    return dMeter;    
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter are is square feet : ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Converted square meter value is  : %.2lf", dRet);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//---------------------------------------------------------------------------------------------------------------
//      Input1                Output
//---------------------------------------------------------------------------------------------------------------
//      5                      0.46
//      7                      0.65
//      10                     0.93
//      17                     1.58
//---------------------------------------------------------------------------------------------------------------
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////