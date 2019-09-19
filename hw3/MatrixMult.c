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
