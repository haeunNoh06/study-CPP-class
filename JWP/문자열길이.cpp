// C
#include <stdio.h>
#include <string.h>

// C++
#include <iostream>
#include <string>

int main(void) {

	char str1[30] = "Jiwoo";
	int len = 0;

	for (int i = 0; str1[i] != '\0'; i++) {
		len++;
	}

	printf("���ڿ��� ���̴� %d\n", len);

	return 0;
}