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
};

int main(void) {

	// 자료형 : Student ( 클래스 생략 가능 )
	struct Student student;
	student.id = 3434;
	student.name = "김길동";
	student.tel = "010-1234-5618";
	student.depart = "미용학과";
	student.address = "서울시 강남구";
	
	cout << "학번 : " << student.id << endl;
	cout << "이름 : " << student.name << endl;
	cout << "전화번호 : " << student.tel << endl;
	cout << "학과 : " << student.depart << endl;
	cout << "주소 : " << student.address << endl;

	
	return 0;
} 