#include <stdio.h>

int main()
{
    int i;
    float *f;

    i = 1092616192;
    f = (float *)&i;

    printf("i address %ul AND f address %ul\n", &i, f);
    printf("i is %d AND f is %f\n", i, *f);
    printf("int length %d AND float length %d\n",sizeof(int), sizeof(float));

    float g;
    int *j;

    g = 15;
    j = (int *)&g;

    printf("g address %ul and j address %ul\n", &g, j);
    printf("g is %f and j is %d\n", g, *j);
    printf("float length %d and int length %d", sizeof(float), sizeof(int));
}
