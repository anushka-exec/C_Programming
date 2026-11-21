Assignment 24 - String Operations in C

This repository contains five C programs to perform different string operations using character pointers, loops and conditional statements.


Programs Included:

1) Check Whether a Character is Present in a String

Accept a string and a character from the user and check whether the given character is present in the string or not. Return TRUE if the character is found; otherwise, return FALSE.

Example:

    Input:  Marvellous Multi OS
            e

    Output: TRUE


2) Count the Frequency of a Character in a String

Accept a string and a character from the user and count the total number of occurrences of the given character in the string.

Example:

    Input:  Marvellous Multi OS
            M

    Output: 2


3) Find the Index of First Occurrence of a Character

Accept a string and a character from the user and return the index of the first occurrence of that character in the string. Return -1 if the character is not found.

Example:

    Input:  Marvellous Multi OS
            e

    Output: 4


4) Find the Index of Last Occurrence of a Character

Accept a string and a character from the user and return the index of the last occurrence of that character in the string. Return -1 if the character is not found.

Example:

    Input:  Marvellous Multi OS
            M

    Output: 11


5) Reverse a String In Place

Accept a string from the user and reverse the given string in place without using an additional string.

Example:

    Input:  abcd

    Output: dcba


How to Compile and Run:

Open Command Prompt and navigate to the program folder.

Use the following GCC commands to compile each program:

gcc Program24_1.c -o Myexe
gcc Program24_2.c -o Myexe
gcc Program24_3.c -o Myexe
gcc Program24_4.c -o Myexe
gcc Program24_5.c -o Myexe

Run the executable using:                   Myexe

Alternatively, on Linux or macOS, use:      ./Myexe


Folder Structure

Assignment_24/
│
├── Program24_1.c
├── Program24_2.c
├── Program24_3.c
├── Program24_4.c
├── Program24_5.c
|
└── README.md
