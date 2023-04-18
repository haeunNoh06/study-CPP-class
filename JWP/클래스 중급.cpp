#include <iostream>

using namespace std;

class MString {
public:
	MString(const char* str)
	{ // !주의! const를 입력해야 됨
		c_str_ = str;
	}
	void set_size(int size) { size_ = size; }
	void set_c_str(const char* c_str) { c_str_ = c_str; }
	unsigned int size(void) { return size_; }
	const char* c_str(void) { return c_str_;  }
private: 
	unsigned int size_;	// 문자열의 길이
	const char* c_str_;	// 문자열의 시작 주소
};

int main(void) {
	MString* str = new MString("I will be back");
	cout << str->c_str() << endl;
	return 0;
}