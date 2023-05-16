#include <iostream>
#include <string.h>

using namespace std;

class Munja {
public:
	// 일반생성자
	Munja(const char* jhqz) {
		// null문자가 있기 때문에 +1을 해주는 것 -> 3("abc")+1(null문자)
		str_ = new char[strlen(jhqz) + 1];
		strcpy(str_, jhqz);// str_과 jhqz를 서로 바꾼다.
		cout << "일반 생성자 호출" << endl;
	}
	// 복사생성자(얕은복사) 오류발생
	Munja(const Munja& hj) : str_(hj.str_)
	{
		str_ = new char[strlen(hj.str_) + 1];
		strcpy(str_, hj.str_);
		cout << "복사생성자 호출" << endl;
	}
	~Munja() {
		delete[] str_;
		cout << "소멸자 호출" << endl;
	}
private:
	char* str_;
};

int main(void) {
	// 객체 두 개, 생성자 두 번 호출.
	Munja m1 = Munja("abc");// 일반생성자 호출
	Munja m2 = m1;			// 복사생성자 호출
	return 0;
}