/* Kay Sweebe
 * CS 471 - Programming Languages
 * Dr. Cooper
 * Simple example of Aliasing and Pointers
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
