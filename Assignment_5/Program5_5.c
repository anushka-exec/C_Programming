// WAP to accept a single character and determine whether it is an uppercase alphabet, lowercase alphabet, digit or special character.
// Use character comparisons without using identify character _classification functions

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckCharacterType
//  Input           :   Character
//  Output          :   Charcter is either uppercase, lowercase, digit or special character
//  Description     :   Check character is uppercase, lowercase, digit or special character
//  Date            :   20/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void CheckCharacterType (char cValue)
{
    if ((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Its a Lowercase Alphabet\n");
    }
    else if ((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Its a Uppercase Alphabet\n");
    }
    else if ((cValue >= '0') && (cValue <= '9'))
    {
        printf("Its a Digit\n");
    }
    else
    {
        printf("Its a Special Character\n");
    } 
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int cValue = '\0';

    printf("Enter a character : ");
    scanf("%c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//      Input                           Output
//-------------------------------------------------------------------------
//        W                        Its a Uppercase Alphabet
//        f                        Its a Lowercase Alphabet
//        57                       Its a Digit
//        &                        Its a Special Character
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////