// WAP which accept name from a user and print that name

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ------ 
//  Input           :   String
//  Output          :   String
//  Description     :   Accepts name from user and prints it
//  Date            :   9/11/2026
//  Author          :   Anushka Anil Harpale
//
/////////////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Name[30];

    printf("Please Enter Full Name: ");
    scanf("%[^'\n']s", &Name);

    printf("Your Name is : %s", Name);

    return EXIT_SUCCESS;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the Program
//      Tested test cases
//---------------------------------------------------------------------------------------------------
//      Input                                                   Output
//---------------------------------------------------------------------------------------------------
//      Please Enter Full Name: Anushka Anil Harpale            Your Name is : Anushka Anil Harpale
//      Please Enter Full Name: Marvellous Infosystem           Your Name is : Marvellous Infosystem
//---------------------------------------------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////////////////////////////////////////