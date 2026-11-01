//  WAP to print 5 to 1 numbers on screen


#include<stdio.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   NA
//  Output          :   Print 5 to 1
//  Description     :   Print numbers from 5 to 1
//  Date            :   20/10/2026
//  Author          :   Anushka Anil Harpale
//
///////////////////////////////////////////////////

int Display()
{
    int i = 0;
    i = 5;
    while(i <= 1)
    {
        printf("%d\n", i);
        i--;
    }
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    Display();

    return 0;
}