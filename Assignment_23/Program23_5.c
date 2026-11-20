// // WAP which accepts a string from user and count number of white spaces

/*
    Input:      MarvellouS
    Output:     0
    
    Input:      MarvellouS Infosystems
    Output:     1
*/

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountWhite 
//  Input           :   String
//  Output          :   Integer
//  Description     :   Accepts a string and counts number of white spaces
//  Date            :   18/11/2026
//  Author          :   Anushka Anil Harpale
//
/////////////////////////////////////////////////////////////////////////////////////////////////////


int CountWhite (char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if (*str == ' ')
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
    char arr[100];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s", arr);

    iRet = CountWhite(arr);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the Program
//      Tested test cases
//---------------------------------------------------------------------------------------------------
//      Input                                                       Output
//---------------------------------------------------------------------------------------------------
//      MarvellouS                                                  0    
//      MarvellouS Infosystems                                      1                        
//      MarvellouS Infosystems by Piyush Manohar Khairnnar          5 
//---------------------------------------------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////////////////////////////////////////