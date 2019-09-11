/** K. Sweebe
 *  CS 471 - S. Cooper
 *  Programming2 - Short Circuit
 *
 *  Demonstrate whether the C programming language utilizes the concept of
 *  short circuiting.
 *
 *  Short circuiting occurs when only part of an expression needs to be
 *  evaluated before finding the value.
 *  See the following logical rules:
 *      if a and b and not a then false
 *      if a or  b and a     then true
 */
#include <stdio.h>

int test_short_circuit();

int main()
{

    printf("Start short circuit test AND...\n");
    if( 0 && test_short_circuit() ) // first condition fails
        ;
    printf("End short circuit test...\n");

    printf("Start short circuit test OR...\n");
    if( 1 || test_short_circuit() ) // first condition passes
        ;
    printf("...End short circuit test\n");

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
