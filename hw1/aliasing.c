/* Kay Sweebe
 * CS 471 - Programming Languages
 * Dr. Cooper
 * Simple example of Aliasing and Pointers
 *
 * The purpose of this assignment is to show how Aliasing works in C.
 * Aliasing is "...having two or more distinct names in a program that can be used to access the same memory cell (Sabesta, p. 38)."
 * Notice, in the following program, we have an integer value i placed in some register. We then declare a float pointer to the address
 * of i. Notice the address of f is distinct from the address of i. This pointer points to the contents of i but instead of treating the
 * contents as an integer, it treats the contents as a float. Our values for i and f vary so differently because of how the bits are interpreted.
 *
 * I found the value for i by declaring a float g of 15.0 and then declaring an integer pointer j to the address of g. The pointer j points
 * to the address of g but interprets the bits as an integer rather than a float. I stored this integer value back into i and made the float
 * pointer f point to i. Everything else follows as usual.
 */ 

#include <stdio.h>

int main()
{
    int i;
    float *f;

    i = 1092616192;
    f = (float *)&i;

    float g; // declare float g
    int *j;  // declare an int pointer

    g = 15.0; // assign float g as the end value we want
    j = (int *)&g; // assign int pointer j as the address of g

    i = *j; // assign i to be the value in j
    f = (float *)&i; // make f the float pointer to i

    printf("i address %ul AND f address %ul\n", &i, f);
    printf("i is %d AND f is %f\n", i, *f);
    printf("int length %d AND float length %d\n",sizeof(int), sizeof(float));


}
