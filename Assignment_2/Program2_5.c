//  WAP to accept number from user and check whether number is even or odd

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkEven
//  Input           :   Integer
//  Output          :   Display number is even or odd
//  Description     :   Displays if number is even or odd
//  Date            :   20/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

BOOL ChkEven(int iNo)
{
   if((iNo % 2) == 0)
   {
        return TRUE;
   }
   else
   {
        return FALSE;
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
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if ( bRet == TRUE)
    {
        printf("Number %d is even\n", iValue);
    }
    else
    {
        printf("Number %d is Odd\n", iValue);
    }
    
    return 0;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//      Input       Output
//-------------------------------------------------------------------------
//         28            Number 28 is even
//         50            Number 50 is even
//         87            Number 87 is Odd
//        -37            Number -37 is Odd
//        -15            Number -15 is Odd
//        +24            Number 24 is even
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////