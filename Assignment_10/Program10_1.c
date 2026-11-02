//WAP to accept radius of circle from user and caluclate its area
/* Consider value of PI as 3.14 (Area - PI * Radius * Radius)
Input : 5.3
Output : 88.2026
*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CircleArea
//  Input           :   Float
//  Output          :   Double
//  Description     :   Calculate the area of the circle
//  Date            :   1/11/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{ 
    float fPI = 3.14f;
    double dArea = 0.0;

    dArea = fPI * fRadius * fRadius;

    return dArea;
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

    printf("Enter radius : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %f", dRet);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//---------------------------------------------------------------------------------------------------------------
//      Input                Output
//---------------------------------------------------------------------------------------------------------------
//      5.3                 88.202614
//      10.4                339.622375
//      25.1                1978.231445
//---------------------------------------------------------------------------------------------------------------
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////