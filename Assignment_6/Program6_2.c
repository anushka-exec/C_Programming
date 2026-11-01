// WAP to check admission eligibilty
// If student's marks are at least 60 and age is at least 17 years ----> Eligible for admission
// Negative Age or marks outside 0 - 100 must be treated as invalid input

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckAdmission
//  Input           :   Float, Integer
//  Output          :   Eligible for Admission or Not Eligilble
//  Description     :   Check admission eligibilty if student 's marks are atleat 60 and age is at atleast 17 years
//  Date            :   21/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void CheckAdmission(float fMarks, int iAge)
{
    if((iAge < 0) || ((fMarks < 0.0) || (fMarks > 100)))
    {
        printf("Invalid Input");
        return;
    }

    if ((fMarks >= 60) && (iAge >= 17))
    {
        printf("Eligible for admission\n");             
    }
    else
    {
        printf("Not Eligible for admission\n"); 
    } 
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter marks : ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//      Marks       Age         Output                                      
//-------------------------------------------------------------------------
//      75          21          Eligible for admission
//      85.63       26          Eligible for admission
//      56.0        21          Not Eligible for admission
//      91          16          Not Eligible for admission
//      -2          18          Invalid Input
//      69         -12          Invalid Input
//      -93.2      -23          Invalid Input
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////