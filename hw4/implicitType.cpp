/*
 * Kay Sweebe
 * CS471 - S. Cooper
 * Programming Assignment 5
 *
 * Purpose:
 *  To illustrate how scope of variables is handled in C++.
 *  Notice the global variable x is able to be called from the
 *  function main. This is not the case in Java.
 */

#include <iostream>

int x; // Declare global variable x

int main()
{
    x = 22; // Assign variable x from inside main
    std::cout << "Global x in C++: " << x << "\n";
    int x; // Declare local variable x
    x = 42; // Assign variable x
    std::cout << "Local x in C++: " << x << "\n";
}// end main
