// // WAP which accepts a string from user and displays only the digits from that string

/*
    Input:      marve89llous121
    Output:     89121
    
    Input:      Demo
    Output:     ----
*/

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayDigits 
//  Input           :   String
//  Output          :   Integer
//  Description     :   Accepts a string and displays only the digits from that string
//  Date            :   18/11/2026
//  Author          :   Anushka Anil Harpale
//
/////////////////////////////////////////////////////////////////////////////////////////////////////


void DisplayDigits (char *str)
{
    while(*str != '\0')
    {
        if ((*str >= '0') && (*str <= '9'))
        {
            printf("%c", *str);
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

    DisplayDigits(arr);

    return EXIT_SUCCESS;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the Program
//      Tested test cases
//---------------------------------------------------------------------------------------------------
//      Input                         Output
//---------------------------------------------------------------------------------------------------
//      marve89llous121               89121
//      Demo                          -----
//      Logic11 Build56ing            1156 
//---------------------------------------------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////////////////////////////////////////