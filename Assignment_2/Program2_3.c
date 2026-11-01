//  WAP to accept one number from user, if number is less than 10 print "hello" otherwise print "Demo"

#include<stdio.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   Integer
//  Output          :   Hello or Demo
//  Description     :   Displays "Hello" if the given number is less than or equal to 10, otherwise displays "Demo"
//  Date            :   20/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo <= 10)
    {
        printf("Hello");
    }
    else
    {
         printf("Demo");
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

    Display(iValue);
    
    return 0;
}

///////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------
//      Input           Output
//-------------------------------------------------
//         4            Hello       
//         9            Hello
//         10           Hello
//         15           Demo
//         67           Demo
//-------------------------------------------------
///////////////////////////////////////////////////