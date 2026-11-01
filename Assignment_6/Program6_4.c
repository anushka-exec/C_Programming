// WAP to accept three integer values representing the length of a triangle. Check whwther they ca form a triangle.
// All sides must be positive, and sum of any 2 sides must be greater than the third side.

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckTriangle
//  Input           :   Integer, Integers, Integers
//  Output          :   Payable amount 
//  Description     :   Accept 3 numbers representing three sides of a triangle. All side must be positive, sum of two sides must be greater than thrid side
//  Date            :   22/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if( (iSide1 < 0) || (iSide2 < 0) || (iSide3 < 0 ))
    {
        printf("Invalid because Side is negative");
    }
        
    if(((iSide1 + iSide2) > (iSide3)) && ((iSide2 + iSide3) > (iSide1)) && ((iSide3 + iSide1) > (iSide2)))
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle\n");
    }
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter three sides : ");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//      Input               Output
//-------------------------------------------------------------------------
//      3 4 5           Valid Triangle
//      1 2 3           Invalid Triangle
//      0 5 6           Invalid Triangle
//     -2 3 4           Invalid Triangle
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////