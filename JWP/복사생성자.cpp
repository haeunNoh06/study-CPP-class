#include <iostream>
#include <string.h>

using namespace std;

class Munja {
public:
	Munja(const char* jhqz) {
		// null문자가 있기 때문에 +1을 해주는 것 -> 3("abc")+1(null문자)
		str_ = new char[strlen(jhqz) + 1];
		strcpy(str_, jhqz);// str_과 jhqz를 서로 바꾼다.
		cout << "일반 생성자 호출" << endl;
	}
	~Munja() {
		delete[] str_;
		cout << "소멸자 호출" << endl;
	}
private:
	char* str_;
};

int main(void) {
	Munja m1 = Munja("abc");
	return 0;
}