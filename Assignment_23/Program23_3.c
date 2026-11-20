// WAP which accept string from user and toggle the case

/*
    Input:      Marvellous Multi OS
    Output:     mARVELLOUS mULTI os 
*/

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   strtogglex 
//  Input           :   String
//  Output          :   String
//  Description     :   Accepts a string and toggles the case of each character
//  Date            :   18/11/2026
//  Author          :   Anushka Anil Harpale
//
/////////////////////////////////////////////////////////////////////////////////////////////////////


void strtogglex (char *str)
{
    while(*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }

        else if ((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
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

    strtogglex(arr);

    printf("Modified String is : %s\n", arr);

    return EXIT_SUCCESS;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the Program
//      Tested test cases
//---------------------------------------------------------------------------------------------------
//      Input                         Output
//---------------------------------------------------------------------------------------------------
//      Marvellous Multi OS           mARVELLOUS mULTI os
//      MarveLLous INFOsystems        mARVEllOUS infoSYSTEMS
//      LOGIC Building49              logic bUILDING49 
//---------------------------------------------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////////////////////////////////////////