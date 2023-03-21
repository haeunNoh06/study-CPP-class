#include <iostream> 

using namespace std;

void add_two(int& num) {
	num += 2;	
}

void main(void) {
	int a = 3;

	add_two(a);

	cout << a << endl;
}