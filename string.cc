/**
* g++ -Wall string.cc -> ./a.out
*/

#include <list>
#include <string>
#include <iostream>

using namespace std;

int main() {
	list<string> list;
	list.push_back("Hello");
	list.push_back("World");
	cout << "List size = " << list.size() << endl;
	return 0;
}

