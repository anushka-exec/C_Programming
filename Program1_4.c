//  WAP to accept one number and check whether it is divisible by 5 or not

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////
//
//  Function Name   :   Check
//  Input           :   Integer
//  Output          :   Divisible by 5 or Not Divisible by 5
//  Description     :   Checks whether the given number is divisible by 5 or not
//  Date            :   20/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////

BOOL Check(int iNo1)
{
    if((iNo1 % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}

///////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------
//      Input      Output
//-------------------------------------------------
//        5         Divisible by 5  
//        10        Divisible by 5   
//        14        Not Divisible by 5 
//       -20        Divisible by 5
//-------------------------------------------------
///////////////////////////////////////////////////