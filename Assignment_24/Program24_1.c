// WAP which accepts a string from user and accept one character. Check whether that character is present in the string or not

/*
    Input:      Marvellous Multi OS
                e
    Output:     TRUE
    
    Input:      Marvellous Multi OS
                W
    Output:     FALSE
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkChar 
//  Input           :   String, Character
//  Output          :   TRUE / FALSE
//  Description     :   Checks whether the given character is present in the string or not
//  Date            :   19/11/2026
//  Author          :   Anushka Anil Harpale
//
/////////////////////////////////////////////////////////////////////////////////////////////////////


BOOL ChkChar (char *str, char ch)
{
    while(*str != '\0')
    {
        if (*str == ch)
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    char arr[50];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter String: ");
    scanf("%[^'\n']s", arr);

    printf("Enter the Character: ");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if (bRet == TRUE)
    {
        printf("Character Found");
    }
    else
    {
        printf("Character Not found");
    }

    return EXIT_SUCCESS;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the Program
//      Tested test cases
//---------------------------------------------------------------------------------------------------
//      Input String                Input Character         Output                      
//---------------------------------------------------------------------------------------------------
//      Marvellous Multi OS         e                       Character Found
//      MarvellouS Multi OS         W                       Character Not found                        
//      Logic Building              O                       Character Not found
//      LOGIC3                      3                       Character Found
//---------------------------------------------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////////////////////////////////////////