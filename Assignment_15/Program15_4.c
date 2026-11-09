// WAP which accept three numbers and print its multiplication

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Multiply 
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Accepts three numbers and returns their multiplication
//  Date            :   9/11/2026
//  Author          :   Anushka Anil Harpale
//
/////////////////////////////////////////////////////////////////////////////////////////////////////


int Multiply (int iNo1, int iNo2, int iNo3)
{
    int iAns = 1;

    if (iNo1 != 0)
    {
        iAns = iAns * iNo1;
    }

    if (iNo2 != 0)
    {
        iAns = iAns * iNo2;
    }

    if (iNo3 != 0)
    {
        iAns = iAns * iNo3;
    }

    return iAns;   
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers : ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the Program
//      Tested test cases
//---------------------------------------------------------------------------------------------------
//         Input            Output
//---------------------------------------------------------------------------------------------------
//      5   4   7           140                     
//      5   0   7           35 
//      5   0   0           5 
//      0   0   5           5 
//      0   5   0           5 
//      0   0   0           0
//     -2   0   6           -12
//     -6  -6  -6           -216
//---------------------------------------------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////////////////////////////////////////