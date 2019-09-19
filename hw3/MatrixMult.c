#include <stdio.h>
#include <stdlib.h>

int main()
{

    // declare variables
    static int SIZE = 1000;
    int m1[SIZE][SIZE], m2[SIZE][SIZE], m3[SIZE][SIZE];
    int i, j, k, sum;

    // fill matrices m1, m2
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            m1[i][j] = 1;
            m2[i][j] = 2;
        }
    }// end fill matrix

    // multiply matrices m1 and m2
    // store result in m3
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            for(k = 0; k < 5; k++){
                sum = sum + m1[i][k] * m2[k][j];
            }

            m3[i][j] = sum;
            sum = 0;
        }
    }// end mult matrix

}// end main
