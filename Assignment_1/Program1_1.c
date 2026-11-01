//  WAP to divide two numbers

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Divide 
//  Input           :   Integer, Integer 
//  Output          :   Integer
//  Description     :   Performs divison
//  Date            :   20/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;
    
    if(iNo2 == 0)
    {
        return -1;
    }
    
    iAns = iNo1 / iNo2;     // Business Logic

    return iAns;
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);      

    printf("Division is : %d",iRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//      Test the program
//      Tested test cases
// ------------------------------------------------
//      Input1      Input2      Output
// ------------------------------------------------
//         15         5          3
//         64         8          8     
// ------------------------------------------------
//
///////////////////////////////////////////////////