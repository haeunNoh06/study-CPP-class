#include <iostream> 

using namespace std;

int main(void) {
	int a = 30;
	int& ra = a; 


	ra = 100;	// a : 100
	cout << "a의 값은 " << a << endl;

	return 0;
}