#include <iostream>
#include <string>

using namespace std;

// 여러 data들을 하나의 의미있는 구조체로 묶어서 관리
// 구조체, 클래스는 일반적으로 단어의 첫 글자를 대문자로 함
struct Student {
	// 성능때문에 id를 문자열로 하지 않음
	// 일반적으로 문자열은 정수형 데이터보다 많은 메모리 공간을 요구하며
	// 정수는 비교 연산을 한 번에 할 수 있는데 문자열은 글자수 만큼 반복하여 비교해야함
	int id;
	string name;
	string tel;
	string depart;// 학과
	string address;
};

int main(void) {

	// 자료형 : struct Student ( 하지만 C++에서는 Student만 써도 가능 )
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