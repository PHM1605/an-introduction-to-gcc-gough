/** Coverage how many times each line of code is executed
* 1. gcc -Wall -fprofile-arcs -ftest-coverage cov.c
* 2. ./a.out
* 3. gcov a-cov => this will generate cov.c.gcov
*/
#include <stdio.h>

int main(void) {
	int i;
	for (i=1; i<10; i++) {
		if (i%3 == 0)
			printf("%d is divisible by 3\n", i);
		if (i%11 == 0)
			printf("%d is divisible by 11\n", i);
	}
	return 0;
}


