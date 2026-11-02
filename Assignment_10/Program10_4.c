//WAP which accept temperature in Fahrenheit and convert it into celsius
/* 1 celsius = (Fahrenheit - 32) * (5/9))
Input : 10      
Output : -12.2222
*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FhtoCs
//  Input           :   Float
//  Output          :   Double
//  Description     :   Accept temperature in Fahrenheit and convert it into celsius
//  Date            :   1/11/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{ 
    double dCel = 0.0;

    dCel = (fTemp - 32) * (5.0/9.0);   

    return dCel;    
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Converted Fahrenheit to Cellsius value is  : %.2lf", dRet);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//---------------------------------------------------------------------------------------------------------------
//      Input1                 Output
//---------------------------------------------------------------------------------------------------------------
//      10                      -12.22
//      5                       -15.00
//      12                      -11.11
//---------------------------------------------------------------------------------------------------------------
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////