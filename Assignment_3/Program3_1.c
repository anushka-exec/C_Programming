//WAP to accept one number from user and print that number of even numbers on screen

# include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   PrintEven
//  Input           :   Integer
//  Output          :   Even Numbers
//  Description     :   Prints the specified number of even numbers on screen
//  Date            :   20/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        printf("Invalid Number\n");
        return;
    }

    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo * 2; iCnt++)
    {

        if((iCnt % 2) == 0)                 //Condition of even numbers
        {
            printf("%d \t", iCnt);
        }

    }
}  


///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    PrintEven(iValue);
    
    return 0;
}

//  if(!(iCnt % 2) == 0)    --->    Condition for Odd numbers
        

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//      Input                           Output
//-------------------------------------------------------------------------
//         7            2       4       6       8       10      12      14 
//         5            2       4       6       8       10 
//         3            2       4       6 
//         0            Invalid Number
//        -3            Invalid Number
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////