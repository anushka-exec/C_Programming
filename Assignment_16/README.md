Assignment 16 - Pattern Printing Programs in C

This repository contains five C programs to practice pattern printing using loops, conditional statements and variables.

Programs Included:

1) Accept the number of rows and columns from the user and display the same sequence of uppercase alphabets in each row.

    Example:
    Input:
    iRow = 4
    iCol = 4

    Output:
    A  B  C  D
    A  B  C  D
    A  B  C  D
    A  B  C  D


2) Accept the number of rows and columns from the user and display uppercase and lowercase alphabets in alternate rows.

    Example:
    Input:
    iRow = 4
    iCol = 4

    Output:
    A  B  C  D
    a  b  c  d
    A  B  C  D
    a  b  c  d


3) Accept the number of rows and columns from the user and display the same alphabet repeatedly in each row, changing the alphabet in the next row.

    Example:
    Input:
    iRow = 3
    iCol = 5

    Output:
    A  A  A  A  A
    B  B  B  B  B
    C  C  C  C  C


4) Accept the number of rows and columns from the user and display numbers in descending order, repeating each number in its respective row.

    Example:
    Input:
    iRow = 4
    iCol = 5

    Output:
    4  4  4  4  4
    3  3  3  3  3
    2  2  2  2  2
    1  1  1  1  1


5) Accept the number of rows and columns from the user and display continuous numbers row-wise, starting from 1.

    Example:
    Input:
    iRow = 3
    iCol = 4

    Output:
    1   2   3   4
    5   6   7   8
    9  10  11  12


How to Compile

Open Command Prompt and navigate to the program folder.
Use the following GCC commands to compile each program:

gcc Program16_1.c -o Myexe
gcc Program16_2.c -o Myexe
gcc Program16_3.c -o Myexe
gcc Program16_4.c -o Myexe
gcc Program16_5.c -o Myexe


How to Run

After successful compilation, execute the program using:

Myexe

Note: Compile and run one program at a time. The '-o Myexe' option specifies the name of the executable file.


Folder Structure

Assignment_16/
│
├── Program16_1.c
├── Program16_2.c
├── Program16_3.c
├── Program16_4.c
├── Program16_5.c
└── README.txt
