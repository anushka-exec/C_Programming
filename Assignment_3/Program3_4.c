//WAP to accept one character from user and convert case of that character

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayConvert
//  Input           :   Character
//  Output          :   Converted Character
//  Description     :   Converts uppercase character to lowercase and lowercase character to uppercase
//  Date            :   20/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void DisplayConvert(char CValue)
{
    if(CValue >= 'A' && CValue <= 'Z')                                      
    {
        CValue = CValue + 32;                                       // char values are stored as ASCII so difference between lowercase letter & uppercase letter is 32
                                                                    // Uppercase letters starts from 65 to 90
        printf("Converted lower character is : %c", CValue);
    }
    else if (CValue >= 'a' && CValue <= 'z')            
    {
        CValue = CValue - 32;                                       // Lowercase starts from 97 to 122

        printf("Converted upper character is : %c", CValue);
    }
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter character : ");
    scanf("%c", &cValue);

    DisplayConvert(cValue);
    
    return 0;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//      Input       Output
//-------------------------------------------------------------------------
//         P           p
//         a           A 
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////