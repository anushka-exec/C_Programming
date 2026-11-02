//WAP to accept single digit from user and print it into word
//Input : 9       Otuput : Nine
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   Integer
//  Output          :   String of characters
//  Description     :   Accept digit number and print it into word
//  Date            :   31/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{ 
    if(iNo < 0)
    {
        iNo = -iNo;
    }

   switch (iNo)
   {
   case 1:
    printf("One");
    break;

    case 2:
    printf("Two");
    break;

    case 3:
    printf("Three");
    break;

    case 4:
    printf("Four");
    break;

    case 5:
    printf("Five");
    break;

    case 6:
    printf("Six");
    break;

    case 7:
    printf("Seven");
    break;

    case 8:
    printf("Eight");
    break;

    case 9:
    printf("Nine");
    break;
 
   default:
   printf("Invalid Number");
   break;
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

    Display(iValue);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////
//      Tested test cases
//----------------------------------------------------
//      Input               Output
//----------------------------------------------------
//      6                   Six
//      8                   Eight
//      0                   Invalid Number
//      67                  Invalid Number
//      -9                  Nine
//----------------------------------------------------
//////////////////////////////////////////////////////