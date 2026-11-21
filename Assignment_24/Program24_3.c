// WAP which accepts a string from user and accept one character. Return the index of first occurrence of that Character

/*
    Input:      Marvellous Multi OS
                M
    Output:     0
    
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
//  Function Name   :   FirstChar 
//  Input           :   String, Character
//  Output          :   Integer
//  Description     :   Returns the index of the first occurrence of the given character in the string
//  Date            :   19/11/2026
//  Author          :   Anushka Anil Harpale
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////


int FirstChar (char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if (*str == ch)
        {
            return iCnt;
        }

        str++;
        iCnt++;
    }

    return -1;        
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

    iRet = FirstChar(arr, cValue);

    printf("Character Location is %d", iRet);

    return EXIT_SUCCESS;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the Program
//      Tested test cases
//---------------------------------------------------------------------------------------------------
//      Input String                Input Character         Output                      
//---------------------------------------------------------------------------------------------------
//      Marvellous Multi OS             M                   Character Location is 0
//      MarvellouS Multi OS             W                   Character Location is -1                       
//      Marvellous Multi OS             e                   Character Location is 4
//---------------------------------------------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////////////////////////////////////////