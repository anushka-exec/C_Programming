// WAP which accept total marks & obtained marks from user and calculate percentage

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Percentage 
//  Input           :   Two Integers (Total Marks, Obtained Marks)
//  Output          :   Float
//  Description     :   Calculates and returns the percentage of marks obtained
//  Date            :   9/11/2026
//  Author          :   Anushka Anil Harpale
//
/////////////////////////////////////////////////////////////////////////////////////////////////////


float Percentage (int iTotal, int iObtained)
{
    float fPer = 0.0f;
    
    if (iTotal == 0)
    {
        return 0.0f;
    }

    fPer = ((float)iObtained / iTotal) * 100;
    
    return fPer;   
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total Marks : ");
    scanf("%d", &iValue1);

    printf("Please enter obtained Marks : ");
    scanf("%d", &iValue2);

    fRet = Percentage (iValue1, iValue2);

    printf("Percentage is: %.1f %%\n", fRet);

    return EXIT_SUCCESS;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the Program
//      Tested test cases
//---------------------------------------------------------------------------------------------------
//         Input            Output
//---------------------------------------------------------------------------------------------------
//      1000    745         Percentage is: 74.5 %                    
//      700     693         Percentage is: 99.0 %
//      0       398         Percentage is: 0.0 %
//---------------------------------------------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////////////////////////////////////////