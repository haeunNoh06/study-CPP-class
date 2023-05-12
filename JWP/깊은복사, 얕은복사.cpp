#include <iostream>

using namespace std;

int main(void) {
	// int 3��¥�� ������ �����Ҵ� �� �� ptr1�� ����Ų��.
	int* ptr1 = new int[3];
	ptr1[0] = 0, ptr1[1] = 10, ptr1[2] = 20;

	// ptr1�� ����Ű�� �ּҰ����� ptr2�� ������ ��
	// ������ ������ ������ �ʰ�, ptr1�� �ּҰ��� ������(���� ����, shallow copy)
	int* ptr2 = ptr1;

	// ���� ���縦 �ϸ� ���������Ͱ� �սǵ� �� �ִ�.
	ptr2[1] = 100;
	for (int i = 0; i < 3; i++) {
		cout << "ptr1 : " << ptr1[i] << ", ptr2 : " << ptr2[i] << "\n" << endl;
	}

	delete[] ptr1;
	// �̹� ������ ������ �� �����Ϸ��� �ϴ� ������ �߻���
	delete[] ptr2;
	return 0;
}