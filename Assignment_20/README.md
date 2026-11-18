Assignment 20 - Pattern Printing Programs in C

This repository contains five C programs to practice pattern printing using nested loops, conditional statements and logical expressions.


Programs Included:

1) Display a Pattern using '*' and '#'

Accept the number of rows and columns from the user and display a pattern using '*' and '#', where '#' is printed along the secondary diagonal.

Example:

    Input:      iRow = 4
                iCol = 4

    Output:     *   *   *   #
                *   *   #   *
                *   #   *   *
                #   *   *   *


2) Display a Pattern using '*', '#' and '@'

Accept the number of rows and columns from the user and display a pattern using '*', '#' and '@', where '#' is printed on the secondary diagonal, '*' before the secondary diagonal and '@' after the secondary diagonal.

Example:

    Input:      iRow = 4
                iCol = 4

    Output:     *   *   *   #
                *   *   #   @
                *   #   @   @
                #   @   @   @


3) Display a Square Pattern using '*'

Accept the number of rows and columns from the user and display a square pattern using '*' characters along the boundaries and secondary diagonal, leaving the remaining positions blank.

Example:

    Input:      iRow = 6
                iCol = 6

    Output:     *   *   *   *   *   *
                *               *   *
                *           *       *
                *       *           *
                *   *               *
                *   *   *   *   *   *


4) Display a Square Pattern using '*', '#' and '$'

Accept the number of rows and columns from the user and display a square pattern using '*', '#' and '$', where '*' is printed along the boundaries and secondary diagonal, '#' above the secondary diagonal and '$' below the secondary diagonal.

Example:

    Input:      iRow = 6
                iCol = 6

    Output:     *   *   *   *   *   *
                *   #   #   #   *   *
                *   #   #   *   $   *
                *   #   *   $   $   *
                *   *   $   $   $   *
                *   *   *   *   *   *


5) Display a Number Pattern using Column Values

Accept the number of rows and columns from the user and display a number pattern using column values along the boundaries and primary diagonal, leaving the remaining positions blank.

Example:

    Input:      iRow = 5
                iCol = 5

    Output:     1   2   3   4   5
                1   2           5
                1       3       5
                1           4   5
                1   2   3   4   5


How to Compile and Run:

Open Command Prompt and navigate to the program folder.

Use the following GCC commands to compile each program:

gcc program20_1.c -o Myexe
gcc program20_2.c -o Myexe
gcc program20_3.c -o Myexe
gcc program20_4.c -o Myexe
gcc program20_5.c -o Myexe

After compiling each program, execute it using the following command:

For Windows Command Prompt:     Myexe

For Linux / Git Bash:           ./Myexe

Note: Compile and run one program at a time because all programs use the same executable name (Myexe).


Folder Structure

Assignment_20/
│
├── program20_1.c
├── program20_2.c
├── program20_3.c
├── program20_4.c
├── program20_5.c
└── README.md
