/*
 * K. Sweebe
 * CS471 - S. Cooper
 * Programming 3 - Compiled and Interpreted Code
 *
 * Purpose of Program:
 *  The following program takes a CLI argument SIZE that gives the size of an
 *  NxN matrix. Then two matrices are filled with random floating point
 *  numbers between 0 and 1. These two matrices are then multiplied and the
 *  result is stored in a third matrix.
 *
 * Purpose of Assignment:
 *  To see how long it takes to run through various sizes of data processing
 *  for a compiled language like C for comparison to an interpreted language
 *  like Python.
*/
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
    
int main(int argc, char *argv[])
{
    // Set rand
    srand((unsigned int)time(NULL));

    // Declare variables
    const int SIZE = atoi(argv[1]);
    float m1[SIZE][SIZE], m2[SIZE][SIZE], m3[SIZE][SIZE], sum;
    int i, j, k;

    // Fill matrices m1, m2
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            m1[i][j] = rand() / (float) RAND_MAX;
            m2[i][j] = rand() / (float) RAND_MAX;
        }
    }// end fill matrix

    // Multiply matrices m1 and m2 and store result in m3
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            for(k = 0; k < SIZE; k++){
                sum = sum + m1[i][k] * m2[k][j];
            }

            m3[i][j] = sum;
            sum = 0;
        }
    }// end mult matrix

}// end main
