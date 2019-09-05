/** K. Sweebe
 *  CS 471 - S. Cooper
 *  Programming2 - Short Circuit
 *
 *  Tests whether or not C includes short circuiting
 */
#include <stdio.h>

int test_short_circuit();

int main()
{
    int x = 1;

    printf("Start short circuit test...\n");
    if( 0 && test_short_circuit() )
        ;
    printf("End short circuit test...\n");

    printf("Helper function never prints\n");
    printf("Short circuiting is used in C\n");
}// end main

int test_short_circuit()
{
    /** Helper function
     *  If contents get printed, then short circuiting does not happen
     *  Else short circuiting occurs
     */
    printf("I just got executed");
    return 0;

}//end test_short_circuit
