/** Show a warning that s is uninitialized when x = 0
* $ gcc -Wall -O2 -c uninit.c
* only show warning when optimize-level-2 is activated '-O2'
*/
int sign(int x) {
	int s;
	if (x>0) 
		s = 1;
	else if (x<0)
		s = -1;
	return s;
}

