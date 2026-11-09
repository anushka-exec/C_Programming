// WAP which accept two numbers and check whether numbers are equal or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkEqual 
//  Input           :   Integer
//  Output          :   BOOL
//  Description     :   Checks whether the given two numbers are equal or not
//  Date            :   9/11/2026
//  Author          :   Anushka Anil Harpale
//
/////////////////////////////////////////////////////////////////////////////////////////////////////


BOOL ChkEqual (int iNo1, int iNo2)
{
    if (iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    BOOL bRet = FALSE;

    printf("Please enter two numbers : ");
    scanf("%d %d", &iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet)
    {
        printf ("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return EXIT_SUCCESS;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the Program
//      Tested test cases
//---------------------------------------------------------------------------------------------------
//         Input            Output
//---------------------------------------------------------------------------------------------------
//      10      10          Equal            
//      10      12          Not Equal
//      10     -10          Not Equal
//     -12      12          Not Equal
//      -3      -3          Equal
//---------------------------------------------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////////////////////////////////////////