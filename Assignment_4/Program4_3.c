// WAP to accept two integers and determine which number is greater. 
// If both numbers are qual, display appropriate message.

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FindGreater
//  Input           :   Integer
//  Output          :   Number is greater or not
//  Description     :   Prints if number is greater or not
//  Date            :   20/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void FindGreater(int iFirst, int iSecond)
{
    if (iFirst > iSecond)
    {
        printf("%d is greater than %d\n", iFirst, iSecond );
    }
    else if(iFirst < iSecond)
    {
        printf("%d is greater than %d\n", iSecond, iFirst );
    }
    else
    {
        printf("Both numbers are equal\n");
    }
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter first number : ");
    scanf("%d", &iValue1);

    printf("Enter second number : ");
    scanf("%d", &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//      Input 1   Input 2           Output
//-------------------------------------------------------------------------
//        14         87             87 is greater than 14   
//        50         30             50 is greater than 30        
//        34         34             Both numbers are equal
//        -5        -15             -5 is greater than -15
//        10         0              10 is grater than 0
//        0         -9              0 is greater than -9
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////