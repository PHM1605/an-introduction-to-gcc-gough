/** Compute the length of Collatz sequence
* x_(n+1) = (x_n)/2 if x_n even; 3*(x_n)+1 if x_n odd
* terminating when reaching 1
* To record profiling:
* 1. gcc -Wall -c -pg collatz.c
* 2. gcc -Wall -pg collatz.o
*/

#include <stdio.h>

// x_n => x_(n+1)
unsigned int step(unsigned int x) {
	if (x%2==0) {
		return (x/2);
	}
	else {
		return (3*x+1);
	}
}

// length of Collatz sequence
unsigned int nseq(unsigned int x0) {
	unsigned int i=1, x;
	if (x0 == 1 || x0==0) {
		return i;
	}
	x = step(x0);
	while (x!=1 && x!=0) {
		x = step(x);
		i++;
	}
	return i;
}

int main(void) {
	unsigned int i, m=0, im=0;
	for (i=1; i<500000; i++) {
		unsigned int k = nseq(i);
		if (k>m) {
			m = k;
			im = i;
			printf("sequence length = %u for %u\n", m, im);
		}
	}
	return 0;
}

