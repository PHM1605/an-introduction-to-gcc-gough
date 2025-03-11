#include <stdio.h>
#include <math.h>

// gcc -Wall badpow.c -o badpow
// ./badpow
int main(void) {
    double x = pow(2.0, 3.0);
    printf("Two cubed is %f\n", x);
    return 0;
}