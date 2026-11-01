//WAP to accept one character from user and check whether that character is vowel (a, e, i, o, u) or not

#include<stdio.h>
typedef int BOOL;

# define TRUE 1
# define FALSE 0


///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkVowel
//  Input           :   Character
//  Output          :   Character is a vowel    or
//                      Charater is not a vowel
//  Description     :   Check if character is a vowel
//  Date            :   20/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char CValue)
{
    if(
        (CValue == 'a') || (CValue == 'e')|| (CValue == 'i') || (CValue == 'o')|| (CValue == 'u') 
        || 
        (CValue == 'A') || (CValue == 'E')|| (CValue == 'I') || (CValue == 'O')|| (CValue == 'U')
    )                                     
    {                                    
        return TRUE;
    }
    else           
    {
       return FALSE;
    }
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character : ");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);
    
    if(bRet == TRUE)
    {                                    
        printf("%c is a vowel\n", cValue);
    }
    else           
    {
       printf("%c is not a vowel\n", cValue);
    }  

    return 0;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//      Input           Output
//-------------------------------------------------------------------------
//         a            a is a vowel
//         e            e is a vowel
//         E            E is a vowel
//         I            I is a vowel
//         P            P not a vowel
//         g            g not a vowel
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////