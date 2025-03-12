/** To create a null pointer bug
* gcc -Wall -g null.c
* => create 'core' file in current folder
* Note: some systems can not creating 'core' file (check by typing 'ulimit -c' and see if it's 0). So we must setup 'ulimit -c unlimited'
*/
int a(int* p);

int main(void) {
	int* p = 0; // null pointer
	return a(p);
}

int a(int* p) {
	int y = *p; // access null pointer -> bug
	return y;
}

