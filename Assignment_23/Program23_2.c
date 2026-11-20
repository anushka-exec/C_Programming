// WAP which accept string from user and convert it into Uppercase

/*
    Input:      Marvellous Multi OS
    Output:     MARVELLOUS MULTI OS 
*/

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   struprx 
//  Input           :   String
//  Output          :   String
//  Description     :   Accepts a string and converts it into Uppercase
//  Date            :   18/11/2026
//  Author          :   Anushka Anil Harpale
//
/////////////////////////////////////////////////////////////////////////////////////////////////////


void struprx (char *str)
{
    while(*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
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

    struprx(arr);

    printf("Modified String is : %s\n", arr);

    return EXIT_SUCCESS;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the Program
//      Tested test cases
//---------------------------------------------------------------------------------------------------
//      Input                         Output
//---------------------------------------------------------------------------------------------------
//      Marvellous Multi OS           MARVELLOUS MULTI OS
//      LOGIC Building                LOGIC BUILDING 
//---------------------------------------------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////////////////////////////////////////