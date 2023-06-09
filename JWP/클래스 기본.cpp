//C++
#include<iostream>
#include<string> // std::string 클래스

using namespace std;


// 여러 data들을 하나의 의미있는 구조체로 묶어서 관리
// 구조체, 클래스는 일반적으로 단어의 첫 글자를 대문자로 합시다
// class는 디폴트 private (struct는 디폴트가 public)
class Student {
    // 성능때문에 studentId를 문자열로 하지 않음'
    // 일반적으로 문자열은 정수형 데이터보다 많은 메모리 공간을 요구하며
    // 정수는 비교연산을 한번에 할 수 있으나, 문자열은 글자수 만큼 반복하여 비교해야함

public:
    //생성자 (constructor) : 객체를 생성할 때 호출되는 함수
    // 생성자는 반환형을 쓰지 않는다.
    //생성자를 정의하지 않으면 default로 매개변수가 없는 생성자가 정의된다
    Student() {}

    Student(int studentId, string name, string telephone, string department, string address) 
        // 멤버변수 초기화. const/참조형 멤버변수 사용가능
        : studentId(studentId), name(name), telephone(telephone), department(department), address(address)
    {
        
    }

    void set_studentId(int _studentId) { studentId = _studentId; }
    void set_name(string _name) { name = _name; }
    void set_telephone(string _telephone) { telephone = _telephone; }
    void set_department(string _department) { department = _department; }
    void set_address(string _address) { address = _address; }

    // class 멤버 함수를 가질 수 있다
    void print(void) {
        cout << "이름 : " << name << "\n과 : " << department << "\n학번 : " << studentId <<
            "\n전화번호 : " << telephone << "\n집주소 : " << address << endl;
    }

private:
    int studentId;
    string name;
    string telephone;
    string department;
    string address;

};

int main(void) {

    //매개변수가 없는 생성자
    Student kim = Student();

    // 정적할당 : 컴파일 시간에 메모리 크기가 결정
    //Student kim2 = Student(2211, "kim", "010-0000-0000", "소프트웨어과", "한국");
    //kim2.print();


    /*Student stu3[2];
    for (int i = 0; i < sizeof(stu3)/sizeof(stu3[0]); i++) {
        stu3[i].print();
    }*/


    // 동적할당 : 실행시간(runtime)에 메모리 크기가 결정(메모리 heap영역)
    // 동적할당된 공간은 포인터로 접근한다.
    //Student* stu3 = new Student(22, "율곡", "010-1234-5678", "유교과", "한성부");
    //stu3->print();
    //// 동적할당 해제(안 하면 메모리 누수현상 발생)
    //delete stu3;
    
    Student* stu4 = new Student[2];

    stu4[0].set_studentId(2030);
    stu4[0].set_name("길동이");
    stu4[0].set_telephone("010-1234-1234");
    stu4[0].set_department("항공과");
    stu4[0].set_address("서울시");
    
    
    
    stu4[1].set_studentId(2033);
    stu4[1].set_name("춘향이");
    stu4[1].set_telephone("010-4444-777");
    stu4[1].set_department("디자인과");
    stu4[1].set_address("충남");

    for (int i = 0; i < 2; i++) {
        stu4[i].print();    // 배열의 요소에 해당하는 객체는 멤버를 .으로 접근
    }


    delete[] stu4;

    return 0;
}

/**
* this
* 멤버변수 초기화 : const/참조 멤버변수 사용가능 초기화 한 뒤 대입해야 함
* 
*/