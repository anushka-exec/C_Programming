Assignment 17 - Number Pattern Printing Programs in C

This repository contains five C programs to practice number and character pattern printing using loops, conditional statements and variables.

Programs Included:

1) Accept the number of rows and columns from the user and display continuous numbers row-wise, restarting from 1 after reaching 9.

    Example:
    Input:
    iRow = 4
    iCol = 4

    Output:
    1  2  3  4
    5  6  7  8
    9  1  2  3
    4  5  6  7


2) Accept the number of rows and columns from the user and display even and odd numbers in alternate rows.

    Example:
    Input:
    iRow = 4
    iCol = 5

    Output:
    2  4  6  8  10
    1  3  5  7  9
    2  4  6  8  10
    1  3  5  7  9


3) Accept the number of rows and columns from the user and display lowercase alphabets and numbers in alternate rows.

    Example:
    Input:
    iRow = 5
    iCol = 5

    Output:
    a  b  c  d  e
    1  2  3  4  5
    a  b  c  d  e
    1  2  3  4  5
    a  b  c  d  e


4) Accept the number of rows and columns from the user and display positive and negative numbers in alternate rows.

    Example:
    Input:
    iRow = 5
    iCol = 5

    Output:
    1   2   3   4   5
   -1  -2  -3  -4  -5
    1   2   3   4   5
   -1  -2  -3  -4  -5
    1   2   3   4   5


5) Accept the number of rows and columns from the user and display an increasing number pattern, where each row starts with the next number.

    Example:
    Input:
    iRow = 4
    iCol = 4

    Output:
    1  2  3  4
    2  3  4  5
    3  4  5  6
    4  5  6  7


How to Compile

Open Command Prompt and navigate to the program folder.
Use the following GCC commands to compile each program:

gcc Program17_1.c -o Myexe
gcc Program17_2.c -o Myexe
gcc Program17_3.c -o Myexe
gcc Program17_4.c -o Myexe
gcc Program17_5.c -o Myexe


How to Run

After successful compilation, execute the program using:

Myexe

Note: Compile and run one program at a time. The '-o Myexe' option specifies the name of the executable file.


Folder Structure

Assignment_17/
│
├── Program17_1.c
├── Program17_2.c
├── Program17_3.c
├── Program17_4.c
├── Program17_5.c
└── README.txt
