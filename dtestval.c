// gcc -Wall -DNUM=100 dtestval.c -> ./a.out
// gcc -Wall -DNUM="2+3" dtestval.c -> ./a.out
 
#include <stdio.h>

int main(void) {
	printf("Value of NUM is %d\n", NUM);
	return 0;
}

