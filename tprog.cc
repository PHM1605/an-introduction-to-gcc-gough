/**
* Method 1: 
* g++ -Wall tprog.cc -o tprog.o => tprog.o has the object code of Buffer<float>
* Method 2:
* g++ -Wall -fno-implicit-templates -c tprog.cc => tprog.o has no object code of Buffer<float>
* g++ -Wall -fno-implicit-templates -c templates.cc 
* g++ tprog.o templates.o
* ./a.out
*/

#include <iostream>
#include "buffer.h"

using namespace std;

int main() {
	Buffer<float> f(10);
	f.insert(0.25);
	f.insert(1.0 + f.get(0));
	cout << "stored value = " << f.get(0) << endl;
	return 0;
}
