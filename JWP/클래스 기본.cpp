#include <iostream>
#include <string>

using namespace std;

// 여러 data들을 하나의 의미있는 구조체로 묶어서 관리
// 구조체, 클래스는 일반적으로 단어의 첫 글자를 대문자로 함
struct Student {
	// struct는 public이 default
	// class는 private이 default
public:
	int id;
	string name;
	string tel;
	string depart;// 학과
	string address;

	void print(void) {
		cout << "학번 : " << id << endl;
		cout << "이름 : " << name << endl;
		cout << "전화번호 : " << tel << endl;
		cout << "학과 : " << depart << endl;
		cout << "주소 : " << address << endl;
	}
};

int main(void) {

	// 자료형 : Student ( 클래스 생략 가능 )
	struct Student stu1;
	stu1.id = 3434;
	stu1.name = "김길동";
	stu1.tel = "010-1234-5618";
	stu1.depart = "미용학과";
	stu1.address = "서울시 강남구";
	
	stu1.print();

	

	
	return 0;
} 