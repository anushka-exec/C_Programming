//WAP to accept number from a user & check if number is less than 50, print small, if greater than 50 than print medium and if it is greater than 100 then print large
//Input : 49        Output: Small
//Input : 75        Output : Medium
//Input : 150       Otuput : Large
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Number
//  Input           :   Integer
//  Output          :   String of characters
//  Description     :   Accept number and check the condition of number enetered and print if it is small, medium or large
//  Date            :   31/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{ 
    if( iNo <= 50)
    {
        printf("Number is small");
    }
    else if((iNo >= 50) && (iNo <= 100))
    {
        printf("Number is medium");
    }
    else if(iNo >= 100)
    {
        printf("Number is large");
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

    Number(iValue);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//---------------------------------------------------------------------------------------------------------------
//      Input                                               Output
//---------------------------------------------------------------------------------------------------------------
//      Enter number : 45                 Number is small
//      Enter number : 89                 Number is medium
//      Enter number : 120                Number is large
//---------------------------------------------------------------------------------------------------------------
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////