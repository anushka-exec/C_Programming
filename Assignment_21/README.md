Assignment 21 - Pattern Printing Programs in C

This repository contains five C programs to practice number and character pattern printing using nested loops and conditional statements.


Programs Included:

1) Display a Rectangular Pattern using *

Accept the number of rows and columns from the user and display a rectangular pattern using *.

Example:

    Input:      iRow = 4
                iCol = 3

    Output:     *   *   *
                *   *   *
                *   *   *
                *   *   *


2) Display an Increasing Number Pattern

Accept the number of rows and columns from the user and display numbers from 1 to the specified number of columns in each row.

Example:

    Input:      iRow = 4
                iCol = 3

    Output:     1   2   3
                1   2   3
                1   2   3
                1   2   3


3) Display a Descending Number Pattern

Accept the number of rows and columns from the user and display numbers in descending order from the specified number of columns to 1.

Example:

    Input:      iRow = 3
                iCol = 5

    Output:     5   4   3   2   1
                5   4   3   2   1
                5   4   3   2   1


4) Display an Alternate Character Pattern

Accept the number of rows and columns from the user and display an alternate pattern using * and # characters.

Example:

    Input:      iRow = 3
                iCol = 4

    Output:     *   #   *   #
                *   #   *   #
                *   #   *   #


5) Display a Repeated Row Number Pattern

Accept the number of rows and columns from the user and display each row number repeatedly across the columns.

Example:

    Input:      iRow = 4
                iCol = 4

    Output:     1   1   1   1
                2   2   2   2
                3   3   3   3
                4   4   4   4


How to Compile

Open Command Prompt and navigate to the program folder.

Use the following GCC commands to compile each program:

gcc program21_1.c -o Myexe
gcc program21_2.c -o Myexe
gcc program21_3.c -o Myexe
gcc program21_4.c -o Myexe
gcc program21_5.c -o Myexe


How to Run

After successful compilation, execute the program using:

For Windows CMD:    Myexe

For Linux / GCC Terminal:   ./Myexe

Note: Compile and run one program at a time. The -o Myexe option specifies the name of the executable file.


Folder Structure:

Assignment_21/
│
├── program21_1.c
├── program21_2.c
├── program21_3.c
├── program21_4.c
├── program21_5.c
└── README.md
