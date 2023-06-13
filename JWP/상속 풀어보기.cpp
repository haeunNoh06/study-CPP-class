#include <iostream>

using namespace std;

class Person {
public:
	Person(string name, int hakbun) : hakbun_(hakbun), name_(name)
	{}
	void PrintShow() {
		cout << "이름 : " << name_ << endl;
		cout << "학번 : " << hakbun_ << endl;
	}
private:
	string name_;
	int hakbun_;
};

class Student : public Person {
public:
	Student(string name, int hakbun, string university) : Person(name, hakbun), university_(university) 
	{}
	void PrintShow() {
		Person::PrintShow();
		cout << "대학 : " << university_ << endl;
	}
private:
	string university_;
};

int main(void) {
	Person* p = new Person("이미림", 1111);
	p->PrintShow();
	Student* s = new Student("미미림", 2222, "미리대학교");
	s->PrintShow();

	return 0;
}