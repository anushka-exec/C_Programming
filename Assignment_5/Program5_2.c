// WAP to accept a year and check it is a leap year 
// A year is a leap year if it is divisible by 400 or by 4 but not by 100.
// Consider years less than or equal to zero as invalid

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckLeapYear
//  Input           :   Integer
//  Output          :   Year is leap or not
//  Description     :   Check the year 
//  Date            :   20/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void CheckLeapYear(int iYear)
{

    if (iYear <= 0)
    {
        printf("Invalid Year\n");
    }


    if (
            ((iYear % 400) == 0 ) ||                                // if the year is divisible by 400, it is a leap year
            (((iYear % 4) == 0 ) && (!(iYear % 100) == 0))          // if the year is divisible by 4 but not by 100, it is a leap year.
       )
    {
        printf("%d is Leap Year\n", iYear);
    }
    else
    {
        printf("%d is not Leap Year\n", iYear);
    }
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iYear = 0;

    printf("Enter year : ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//       Input     Output                      Reason
//-------------------------------------------------------------------------
//       2024	   2024 is Leap Year	        Divisible by 4, not by 100
//       2023  	   2023 is not Leap Year	    Not divisible by 4
//       1990	   1990 is not Leap Year	    Not divisible by 4
//       1996	   1996 is Leap Year	        Divisible by 4, not by 100
//       2000	   2000 is Leap Year	        Divisible by 400
//       2400      2400 is Leap Year	        Divisible by 400
//       1900      1900 is not Leap Year	    Divisible by 100 but not by 400
//        0	       Invalid Year	                Year is equal to zero
//       -4	       Invalid Year	                Year is less than zero
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////