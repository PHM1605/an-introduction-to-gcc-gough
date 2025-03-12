/** Test different optimization scenarios
* gcc -Wall -O0 optim_test.c -lm
* gcc -Wall -O1 optim_test.c -lm
* gcc -Wall -O2 optim_test.c -lm
* gcc -Wall -O3 optim_test.c -lm
* gcc -Wall -O3 -funroll-loops optim_test.c -lm
* then 'time ./a.out'
*/
#include <stdio.h>
double powern(double d, unsigned n) {
	double x= 1.0;
	unsigned j;
	for (j=1; j<=n; j++)
		x *= d;
	return x;
}

int main(void) {
	double sum = 0.0;
	unsigned i;
	for (i=1; i<=100000000; i++)
		sum += powern(i, i%5);
	printf("sum = %g\n", sum);
	return 0;
}


