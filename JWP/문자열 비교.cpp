#include <iostream>
#include <string>

using namespace std;

int main(void) {

	char str1[50] = "Hello";
	char str2[50] = "World";

	const int s1_l = strlen(str1);
	const int s2_l = strlen(str2);

	// s1_l�� s2_l �� �ּҰ�
	const int l = ( s1_l < s2_l ? s1_l : s2_l );

	int i = 0;
	while (i < 1) {
		if (str1[i] > str2[i]) {
			printf("str1 > str2 ");
			break;
		}
		else {
			printf("str1 < str2 ");
			break;
		}
		i++;
	}
	if (i == 1) {
		if (s1_l > s2_l) {
			printf("str1 > str2");
		}
		else if (s1_l < s2_l) {
			printf("str1 < str2");
		}
		else {
			printf("str1 == str2");
		}
	}

	return 0;
} 