#include <iostream>

using namespace std;

class Person {
public:
	Person(string name, int hakbun) : hakbun_(hakbun), name_(name)
	{}
	void PrintShow() {
		cout << "�̸� : " << name_ << endl;
		cout << "�й� : " << hakbun_ << endl;
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
		cout << "���� : " << university_ << endl;
	}
private:
	string university_;
};

int main(void) {
	Person* p = new Person("�̸̹�", 1111);
	p->PrintShow();
	Student* s = new Student("�̸̹�", 2222, "�̸����б�");
	s->PrintShow();

	return 0;
}