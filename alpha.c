#include <stdio.h>

/**
* gcc -Wall -miee alpha.c
* note: this doesn't work on newer linux
*/

int main(void) {
	double x = 1.0, y = 0.0;
	printf("x/y = %g\n", x/y);
	return 0;
}

