// WAP which accepts a string from user and accept one character. Return Frequency of that Character

/*
    Input:      Marvellous Multi OS
                M
    Output:     2
    
    Input:      Marvellous Multi OS
                W
    Output:     0
*/

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountChar 
//  Input           :   String, Character
//  Output          :   Integer
//  Description     :   Counts the frequency of the given character in the string
//  Date            :   19/11/2026
//  Author          :   Anushka Anil Harpale
//
/////////////////////////////////////////////////////////////////////////////////////////////////////


int CountChar (char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if (*str == ch)
        {
            iCount++;
        }

        str++;
    }

    return iCount;        
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
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s", arr);

    printf("Enter the Character: ");
    scanf(" %c", &cValue);

    iRet = CountChar(arr, cValue);

    printf("Character Frequency is %d", iRet);

    return EXIT_SUCCESS;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the Program
//      Tested test cases
//---------------------------------------------------------------------------------------------------
//      Input String                Input Character         Output                      
//---------------------------------------------------------------------------------------------------
//      Marvellous Multi OS         M                       Character Frequency is 2
//      MarvellouS Multi OS         W                       Character Frequency is 0                       
//      Machine LEARNING            a                       Character Frequency is 1
//---------------------------------------------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////////////////////////////////////////