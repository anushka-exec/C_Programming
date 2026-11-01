//  WAP to accept one number from user and print that of * on screen

#include<stdio.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display 
//  Input           :   Integer 
//  Output          :   Print * for accepted number
//  Description     :   Print * for accepted number
//  Date            :   20/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    while(iCnt < iNo)
    {
        printf("*");
        iCnt++;
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

    printf("Printing %d times : ", iValue);

    Display(iValue);
    
    return 0;
}

///////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------
//      Input          Output
//-------------------------------------------------
//         2         Printing 2 times : **         
//         6         Printing 6 times : ******     
//-------------------------------------------------
///////////////////////////////////////////////////