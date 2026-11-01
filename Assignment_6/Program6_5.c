// WAP to calculate Employee Bonus
// Accept employee's monthly salary and completed years of service. 

/* Calculate the bonus using these rules: 
    1. more than 10 years of experience earns bonus of 15% of monthly salary
    2. five to 10 years earns 10%. 
    3. less than five years earns 5%. 
    
    Salary must be positive and years of services cannot be negative.
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CalculateBonus
//  Input           :   Integer, Integers
//  Output          :   Float
//  Description     :   Accept salary and years of service and determine its bonus
//  Date            :   22/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    //Input updater for Salary
    if((fSalary < 0) || (iYears < 0))
    {
        printf("Invalid Input");
    }
        
    if(iYears >= 10)
    {
        fBonus = fSalary * 0.15;
    }
    else if(iYears >= 5 && iYears <= 10)
    {
        fBonus = fSalary * 0.10;
    }
    else if(iYears < 5)
    {
        fBonus = fSalary * 0.5;
    }
    printf("Bonus is : %f", fBonus);
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    float fSalary= 0.0f;
    int iYears = 0 ;
    
    printf("Enter salary and years of service : ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//      Salary      Service           Output
//-------------------------------------------------------------------------
//      30000        12         Bonus is : 450000.00
//      12000        4          Bonus is : 6000.000000
//      -30000       12         Invalid Input
//      20000        -7         Invalid Input
//      -1000        -2         Invalid Input
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////