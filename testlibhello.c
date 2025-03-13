/**
* To create library (archive file): ar cr libhello.a hello_fn.o bye_fn.o
* gcc -Wall testlibhello.c libhello.a -o hello
* or: gcc -Wall -L. testlibhello.c -lhello -o hello
* notice: '-L.' option to search for 'libhello.a' in the current directory 
*/
#include "hello.h"

int main(void) {
	hello("everyone");
	bye();
	return 0;
}

