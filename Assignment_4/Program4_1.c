//WAP to accept a interger from user check whether the entered number is positive, negative or zero

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckNumber
//  Input           :   Integer
//  Output          :   Number is positive, negative or zero
//  Description     :   Prints number is positive, negative or zero
//  Date            :   20/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void CheckNumber(int iNo)
{
    if (iNo > 0)
    {
        printf("%d is a postive number\n", iNo);
    }
    else if(iNo < 0)
    {
        printf("%d is a negative number\n", iNo);
    }
    else
    {
        printf("Input is %d\n", iNo);
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

    printf("Enter number : ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//      Input           Output
//-------------------------------------------------------------------------
//        29            29 is a postive number
//        45            45 is a postive number
//       -20            -20 is a negative number
//       -10            -10 is a negative number
//        0             Input is 0
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////