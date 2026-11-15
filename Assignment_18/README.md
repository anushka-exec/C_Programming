Assignment 18 - Pattern Printing Programs in C

This repository contains five C programs to practice character and number pattern printing using nested loops, conditional statements and variables.


Programs Included:

1) Display a Character Pattern using '*' and '#'**

Accept the number of rows and columns from the user and display a triangular pattern using '*' and '#'.

Example:

Input:  iRow = 4
        iCol = 4


Output:     *   #   #   #
            *   *   #   #
            *   *   *   #
            *   *   *   *


2) Display an Inverted Character Pattern using '*' and '#'**

Accept the number of rows and columns from the user and display an inverted triangular pattern using '*' and '#'.

Example:

Input:  iRow = 4
        iCol = 4


Output:     *   *   *   *
            *   *   *   #
            *   *   #   #
            *   #   #   #


3) Display a Diagonal Pattern using '*' and '$'**

Accept the number of rows and columns from the user and display a diagonal pattern using '*' and '$' characters.

Example:

Input:  iRow = 5
        iCol = 5


Output:     $   *   *   *   *
            *   $   *   *   *
            *   *   $   *   *
            *   *   *   $   *
            *   *   *   *   $


4) Display a Hollow Rectangle using '*' and '@'**

Accept the number of rows and columns from the user and display a hollow rectangular pattern using '*' for the boundary and '@' for the inner portion.

Example:

Input:  iRow = 6
        iCol = 5


Output:     *   *   *   *   *
            *   @   @   @   *
            *   @   @   @   *
            *   @   @   @   *
            *   *   *   *   *


5) Display a Hollow Rectangle using Numbers and '*'**

Accept the number of rows and columns from the user and display a hollow rectangular pattern using numbers on the boundary and '*' in the inner portion.

Example:

Input:  iRow = 4
        iCol = 4

Output:     1   2   3   4
            1   *   *   4
            1   *   *   4
            1   2   3   4


How to Compile

Open Command Prompt and navigate to the program folder.
Use the following GCC commands to compile each program:

gcc Program18_1.c -o Myexe
gcc Program18_2.c -o Myexe
gcc Program18_3.c -o Myexe
gcc Program18_4.c -o Myexe
gcc Program18_5.c -o Myexe


How to Run

After successful compilation, execute the program using:
Myexe

Note: Compile and run one program at a time. The '-o Myexe' option specifies the name of the executable file.


Folder Structure

Assignment_18/
│
├── Program18_1.c
├── Program18_2.c
├── Program18_3.c
├── Program18_4.c
├── Program18_5.c
└── README.txt
