//WAP to accept N number from a user and print all odd numbers up to N
//Input : 18
//Output: 1     3       5       7       9       11      13
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   displayOddPattern
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Print odd numbers up to accepted nos
//  Date            :   31/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void displayOddPattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        //if((iCnt % 2) == 0)                     //Even number condition
        if(!(iCnt % 2) == 0)                      //Odd number condiiton
        {    
            printf("%d\t",iCnt);
        }
    }
    printf("\n");
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter frequency : ");
    scanf("%d", &iValue);

    displayOddPattern(iValue);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//---------------------------------------------------------------------------------------------------------------
//      Input                               Output
//---------------------------------------------------------------------------------------------------------------
//      Frequency:18                1       3       5       7       9       11      13      15      17
//      Frequency:12                1       3       5       7       9       11               
//---------------------------------------------------------------------------------------------------------------
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////