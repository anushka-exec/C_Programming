//WAP which accepts width & height of rectangle from userand calculate its area
/* Area = Width * Height
Input : 5.3, 9.78
Output : 51.834
*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   RectArea
//  Input           :   Float
//  Output          :   Double
//  Description     :   Calculate the area of the rectangle
//  Date            :   1/11/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{ 
    double dRectArea = 0.0;

    dRectArea = fWidth * fHeight;

    return dRectArea;
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter Width : ");
    scanf("%f", &fValue1);

    printf("Enter Height : ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is : %lf", dRet);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//---------------------------------------------------------------------------------------------------------------
//      Input1          Input2        Output
//---------------------------------------------------------------------------------------------------------------
//      5.3              9.78          51.834000
//      10.4             4.67          48.568001
//---------------------------------------------------------------------------------------------------------------
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////