// WAP which accept string from user and convert it into lowercase

/*
    Input:      Marvellous Multi OS
    Output:     marvellous multi os 
*/

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   strlwrx 
//  Input           :   String
//  Output          :   String
//  Description     :   Accepts a string and converts it into Lowercase
//  Date            :   18/11/2026
//  Author          :   Anushka Anil Harpale
//
/////////////////////////////////////////////////////////////////////////////////////////////////////


void strlwrx (char *str)
{
    while(*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }

        str++;
    }
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];

    printf("Enter String: ");
    scanf("%[^'\n']s", arr);

    strlwrx(arr);

    printf("Modified String is : %s\n", arr);

    return EXIT_SUCCESS;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the Program
//      Tested test cases
//---------------------------------------------------------------------------------------------------
//      Input                         Output
//---------------------------------------------------------------------------------------------------
//      Marvellous Multi OS           marvellous multi os
//      LOGIC Building                logic building 
//---------------------------------------------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////////////////////////////////////////