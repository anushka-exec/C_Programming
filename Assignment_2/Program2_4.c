//  WAP to accept two number from user and display first number in second number of times

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   Integer(12  5)
//  Output          :   Integer(12  12  12  12  12)
//  Description     :   Displays "Hello" if the given number is less than or equal to 10, otherwise displays "Demo"
//  Date            :   20/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

 int Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iFrequency; iCnt++ )
    {
        printf("%d \t", iNo);
    }

}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    printf("Enter frequency : ");
    scanf("%d", &iCount);

    Display(iValue, iCount);
    
    return 0;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//      Input       Frequency        Output
//-------------------------------------------------------------------------
//         30         2              30      30
//         26         4              26      26      26      26 
//         -2         3              -2      -2      -2
//         21        -3              21      21      21
//         -2         0             
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////