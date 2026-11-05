//WAP which accept number from a user and display its digits in reverse order

/*
    Input   :   2395
    Output  :   5
                9
                3
                2
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayDigit
//  Input           :   Integer
//  Output          :   Displays the digits of a Number
//  Description     :   Displays digits of a number in reverse order
//  Date            :   5/11/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
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

    printf("Enter Number : ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases

/*
    Input   :   2395
    Output  :   5
                9
                3
                2


    Input   :   1018
    Output  :   8
                1
                0
                1

    Input   :   -1018
    Output  :   8
                1
                0
                1

    Input   :   9000
    Output  :   0
                0
                0
                9

    Input   :   054
    Output  :   4
                5
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////