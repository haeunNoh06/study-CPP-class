#include <iostream> 

using namespace std;

// �Լ� �����ε��� �ϸ� �Լ��̸��� ����, �Ű������� �ٸ���
// �Լ� �̸��� �ϳ��� ������ �� �ְ� ��
int sum(int a,   int b) {
	return a + b;
}

float sum(float a, float b) {
	return a + b;
}

void main(void) {

	cout << sum(1,2) << endl;
	cout << sum(1.1f, 2.2f) << endl;


}