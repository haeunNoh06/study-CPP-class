#include <iostream>
#include <string.h>

using namespace std;

class MString {
public:
	MString(const char* str)
	{ // !주의! const를 입력해야 됨
		unsigned int l = strlen(str);
		c_str_ = new char[l + 1];	// '\0'문자가 들어갈 공간 (+1)
		strcpy(c_str_, str);	// c_str_에 str을 복사한다.
		size_ = l;
		cout << "MString 생성자 호출 완료" << endl;
	}

	// 복사생성자(별도의 정의가 없으면 컴파일러가 알아서 만들어 줌)
	MString(const MString& rhs) : c_str_(rhs.c_str_), size_(rhs.size_)
	{
		cout << "복사생성자 호출" << endl;
	}
	
	// 소멸자의 매개변수는 없다.
	~MString() {
		// 소멸자로 생성자에서 동적할당한 메모리 해제
		delete[] c_str_;
		cout << "MString 소멸자 호출 완료" << endl;
	}

	unsigned int size(void) { return size_; }
	char* c_str(void) { return c_str_;  }
private: 
	unsigned int size_;	// 문자열의 길이
	char* c_str_;	// 문자열의 시작 주소
};

int main(void) {
	// 생성자가 호출되면서 문자열의 "I will be back"만큼의 동적할당이 이뤄짐
	// MString* str = new MString("I will be back");

	// 객체 str만 삭제. 동적할당으로 생성된 문자열은 그대로 남아있음(메모리 누수)
	// TODO : 소멸자(destructor)를 이용하여 동적할당된 메모리도 해제하자
	// delete str;// 동적할당 해제

	// 일반생성자 호출
	MString str = MString("I will be back");

	// 복사생성자 호출
	MString str2 = str;

	return 0;
}