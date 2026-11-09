// WAP which accept one number from user and check whether that number is greater than 100 or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkGreater 
//  Input           :   Integer
//  Output          :   BOOL
//  Description     :   Checks whether the given number is greater than 100 or not
//  Date            :   9/11/2026
//  Author          :   Anushka Anil Harpale
//
/////////////////////////////////////////////////////////////////////////////////////////////////////


BOOL ChkGreater (int iNo)
{
    if (iNo > 100)
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
    int iValue = 0;

    BOOL bRet = FALSE;

    printf("Please enter number : ");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);

    if(bRet)
    {
        printf ("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return EXIT_SUCCESS;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the Program
//      Tested test cases
//---------------------------------------------------------------------------------------------------
//      Input       Output
//---------------------------------------------------------------------------------------------------
//      102         Greater            
//      39          Smaller
//      100         Smaller
//      0           Smaller
//      -6          Smaller
//---------------------------------------------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////////////////////////////////////////