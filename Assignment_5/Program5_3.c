//WAP to accept marks of a student out of 100 and display the grade according to following criteria.
// Marks outsides 0-100 are invalid

/*
    Marsks        Grade
    90 - 100        A
    75 - 89         B
    60 - 74         C
    40 - 59         D
    Below 40        Fail
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayGrade
//  Input           :   Float
//  Output          :   Grade is A, B, C, D or Fail
//  Description     :   To calculate the grade of student
//  Date            :   20/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void DisplayGrade(float fMarks)
{
    if ((fMarks >= 90) && (fMarks <=100))
    {
        printf("Grade A\n");
    }
    else if ((fMarks >= 75) && (fMarks <=89))
    {
        printf("Grade B\n");
    }
    else if ((fMarks >= 60) && (fMarks <=74))
    {
        printf("Grade C\n");
    }
    else if ((fMarks >= 40) && (fMarks <=59))
    {
        printf("Grade D\n");
    }
    else if ((fMarks < 40) && (fMarks >= 0))
    {
        printf("Fail\n");
    }
    else
    {
        printf("Invalid Marks!!");
    }
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int fMarks = 0.0f;

    printf("Enter marks : ");
    scanf("%d", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//        Input             Output
//-------------------------------------------------------------------------
//         92            Grade is A
//         88            Grade is B      
//         65            Grade is C
//         40            Grade is D
//         39            Fail
//         25            Fail
//         0             Fail
//        102            Invalid Marks!!!
//         -2            Invalid Marks!!!
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////