//WAP to accept one number from user and print that number of * on screen

#include<stdio.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Accept 
//  Input           :   Integer 
//  Output          :   Print * for accepted number
//  Description     :   Print * for accepted number
//  Date            :   20/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
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

    printf("Enter number : ");
    scanf("%d", &iValue);

    Accept(iValue);

    return 0;
}

///////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------
//      Input       Output
//-------------------------------------------------
//        4         ****          
//        10        **********     
//-------------------------------------------------
///////////////////////////////////////////////////