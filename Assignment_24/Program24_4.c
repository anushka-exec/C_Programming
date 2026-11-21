// WAP which accepts a string from user and accept one character. Return index of last occurence of that character

/*
    Input:      Marvellous Multi OS
                M
    Output:     11
    
    Input:      Marvellous Multi OS
                W
    Output:     -1

    Input:      Marvellous Multi OS
                e
    Output:     4
*/

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   LastChar 
//  Input           :   String, Character
//  Output          :   Integer
//  Description     :   Returns the index of the last occurrence of the given character in the string
//  Date            :   19/11/2026
//  Author          :   Anushka Anil Harpale
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////


int LastChar (char *str, char ch)
{
    int iCnt = 0;
    int iPos = -1;

    while(*str != '\0')
    {
        if (*str == ch)
        {
            iPos = iCnt;
        }

        str++;
        iCnt++;
    }

    return iPos;        
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

    iRet = LastChar(arr, cValue);

    printf("Characters Last Location is %d", iRet);

    return EXIT_SUCCESS;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the Program
//      Tested test cases
//---------------------------------------------------------------------------------------------------
//      Input String                Input Character         Output                      
//---------------------------------------------------------------------------------------------------
//      Marvellous Multi OS             M                   Characters Last Location is 11
//      MarvellouS Multi OS             W                   Characters Last Location is -1                       
//      Marvellous Multi OS             e                   Characters Last Location is 4
//      Machine LEARNING                a                   Characters Last Location is 1
//---------------------------------------------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////////////////////////////////////////