#include <iostream>
#include <string.h>

using namespace std;

class Munja {
public:
	Munja(const char* jhqz) {
		// null���ڰ� �ֱ� ������ +1�� ���ִ� �� -> 3("abc")+1(null����)
		str_ = new char[strlen(jhqz) + 1];
		strcpy(str_, jhqz);// str_�� jhqz�� ���� �ٲ۴�.
		cout << "�Ϲ� ������ ȣ��" << endl;
	}
	~Munja() {
		delete[] str_;
		cout << "�Ҹ��� ȣ��" << endl;
	}
private:
	char* str_;
};

int main(void) {
	Munja m1 = Munja("abc");
	return 0;
}