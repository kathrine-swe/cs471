/*
 * Kay Sweebe
 * CS471 - S. Cooper
 * Programming Assignment 5
 *
 * Purpose:
 *  Show how scope is handled in C.
 *  Notice how the global x is declared but is still able to be
 *  called in the function main. This is not the case in languages like Java.
 */
#include <stdio.h>
#include <stdlib.h>

int x; // Declare global x
int main()
{

    x = 22; // Assign global x
    printf("Global x in C: %d\n", x);
    int x; // Declare local x
    x = 42; // Assign local x
    printf("Local x in C: %d\n", x);   
}// end main
