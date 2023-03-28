#include <iostream>
#include <string>

using namespace std;

int main(void) {

	char str1[50] = "Hello";
	char str2[50] = "World";

	int result = strcmp(str1, str2);
	
	if (result == 0) {
		printf("str1 == str2");
	}
	else if ( result == 1 ) {
		printf("str1 > str2");
	}
	else if ( result == -1 ) {
		printf("str1 < str2");
	}

	

	return 0;
} 