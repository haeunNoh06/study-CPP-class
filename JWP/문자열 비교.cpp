#include <iostream>
#include <string>

using namespace std;

int main(void) {

	string str1 = "aaa";
	string str2 = "aaaa";
	
	if (str1 == str2) {
		cout << "str1 == str2";
	}
	// str2�� str1���� ������ �ʰ� ������ ��
	else if ( str1 > str2 ) {
		cout << "str1 > str2";
	}
	else if ( str1 < str2 ) {
		cout << "str1 < str2";
	}

	

	return 0;
} 