/*
 * Kay Sweebe
 * CS 471 - Programming Languages
 * S. Cooper
 * Programming 2 - Short Circuit Evaluation
 */

#include <stdio.h>

int test_short_circuit(){
    printf("No Shortcircuit in C\n");
    return 0;
}// end test_short_circuit

int main(){
    printf("Begin test for C\n");
    int i = 1;

    if( i == 0 && test_short_circuit()){}
    printf("End test for C\n");
}// end main
