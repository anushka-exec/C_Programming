// WAP to accept Age of a person and determine whether the person is eligible to vote.
// A person must be at least 18 years old to vote. A negative age should be considered Invalid.

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckVoting
//  Input           :   Integer
//  Output          :   Eligible for voting or not or invalid
//  Description     :   Check if user is eligible for voting or not or invalid
//  Date            :   20/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void CheckVotingEligibility(int iNo)
{
    if (iNo >= 18)
    {
        printf("Eligible for voting\n");
    }
    else if(iNo <= 0)
    {
        printf("Invalid Age\n");
    }
    else if (iNo < 18)
    {
        printf("Not eligible for voting\n");
    }
    
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iAge = 0;

    printf("Enter your age : ");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//      Input       Output
//-------------------------------------------------------------------------
//        29        Eligible for voting
//        18        Eligible for voting
//        12        Not eligible for voting
//        10        Not eligible for voting
//       -10        Invalid Age
//         0        Invalid Age
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////