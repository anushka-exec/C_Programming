Assignment 19 - Pattern Printing Programs in C

This repository contains five C programs to practice character and number pattern printing using nested loops, conditional statements and variables.


Programs Included:

1) Display an Increasing Right-Angled Triangular Pattern using '*'

Accept the number of rows and columns from the user and display an increasing right-angled triangular pattern using '*' character.

Example:

    Input:  iRow = 4  
            iCol = 4

    Output:     *
                *   *
                *   *   *
                *   *   *   *


2) Display a Decreasing Right-Angled Triangular Pattern using '*'

Accept the number of rows and columns from the user and display a decreasing right-angled triangular pattern using '*' character.

Example:

    Input:  iRow = 4  
            iCol = 4

    Output:     *   *   *   *
                *   *   *
                *   *
                *


3) Display a Diagonal Character Pattern using '$', '#' and '*'

Accept the number of rows and columns from the user and display a diagonal character pattern using '$', '#' and '*' characters.

Example:

    Input:  iRow = 5  
            iCol = 5

    Output:     $   *   *   *   *
                #   $   *   *   *
                #   #   $   *   *
                #   #   #   $   *
                #   #   #   #   $


4) Display a Hollow Square Pattern with Main Diagonal using '*'

Accept the number of rows and columns from the user and display a hollow square pattern with a main diagonal using '*' character.

Example:

    Input:  iRow = 6  
            iCol = 6

    Output:     *   *   *   *   *   *
                *   *               *
                *       *           *
                *           *       *
                *               *   *
                *   *   *   *   *   *


5) Display a Right-Shifted Triangular Number Pattern

Accept the number of rows and columns from the user and display a right-shifted triangular number pattern using column values.

Example:

Input:  iRow = 4  
        iCol = 4

Output:     1   2   3   4
                2   3   4
                    3   4
                        4


How to Compile

Open Command Prompt and navigate to the program folder.
Use the following GCC commands to compile each program:

gcc Program19_1.c -o Myexe
gcc Program19_2.c -o Myexe
gcc Program19_3.c -o Myexe
gcc Program19_4.c -o Myexe
gcc Program19_5.c -o Myexe


How to Run

After successful compilation, execute the program using:

Myexe

Note: Compile and run one program at a time. The '-o Myexe' option specifies the name of the executable file.


Folder Structure

Assignment_19/
│
├── Program19_1.c
├── Program19_2.c
├── Program19_3.c
├── Program19_4.c
├── Program19_5.c
└── README.md
