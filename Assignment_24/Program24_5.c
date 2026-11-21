// WAP which accepts a string from user and reverse that string in place

/*
    Input:      abcd
    Output:     dcba
    
    Input:      abba
    Output:     abba
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   StrRevX 
//  Input           :   String
//  Output          :   String
//  Description     :   Reverses the given string in place
//  Date            :   19/11/2026
//  Author          :   Anushka Anil Harpale
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////


void StrRevX (char *str)
{
    char *iStart = str;
    char *iEnd = str + strlen(str) - 1;         // Last character index
    char cTemp = '\0';

    while ((iStart < iEnd))
    {
        cTemp = *iStart;
        *iStart = *iEnd;
        *iEnd = cTemp;

        iStart++;
        iEnd--;
    }
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[50];

    printf("Enter String: ");
    scanf("%[^'\n']s", arr);

    StrRevX(arr);

    printf("Modified String is %s", arr);

    return EXIT_SUCCESS;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the Program
//      Tested test cases
//---------------------------------------------------------------------------------------------------
//      Input String                    Output                      
//---------------------------------------------------------------------------------------------------
//      abcd                            Modified String is dbca                   
//      abba                            Modified String is abba       
//      Marvellous INFOSYSTEMS          Modified String is SMETSYSOFNI suollevram
//      PYTHON                          Modified String is NOHTYP 
//      101DIgeR                        Modified String is RegID101 
//---------------------------------------------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////////////////////////////////////////