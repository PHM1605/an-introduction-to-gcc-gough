/** To show that we should wrap parentheses around macros
* gcc -Wall -DNUM="2+3" dtestmul10.c
* correct: 50
* wrong: 10*2+3=23
*/

#include <stdio.h>

int main(void) {
	printf("Ten times NUM is %d\n", 10*(NUM));
	return 0;
}

