//WAP which accept distance in kilometers and convert it into meters
/* 1 kilometer = 1000 Meter
Input : 5           12
Output : 5000       12000
*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   KMtoMeter
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Accept distance in KM and convert it into meter 
//  Date            :   1/11/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{ 
    int iKM = 1000;
    int iMeter = 0;

    iMeter = iNo * iKM;

    return iMeter;    
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
   int iValue = 0, iRet = 0;

    printf("Enter distance : ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Converted meters is  : %d", iRet);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//---------------------------------------------------------------------------------------------------------------
//      Input1                 Output
//---------------------------------------------------------------------------------------------------------------
//      5                      5000
//      8                      8000
//      12                     12000
//---------------------------------------------------------------------------------------------------------------
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////