#include <iostream>
#include <string>

using namespace std;

int main(void) {

	string str1 = "aaa";
	string str2 = "aaaa";
	
	if (str1 == str2) {
		cout << "str1 == str2";
	}
	// str2가 str1보다 사전에 늦게 나오게 됨
	else if ( str1 > str2 ) {
		cout << "str1 > str2";
	}
	else if ( str1 < str2 ) {
		cout << "str1 < str2";
	}

	

	return 0;
} 