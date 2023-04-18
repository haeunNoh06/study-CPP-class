#include <iostream>
#include <string>

using namespace std;

class Employee {

public:
	Employee() {}
	Employee(string name, int id, int age, int salary) : name_(name), id_(id), age_(age), salary_(salary)
	{

	}

	void set_name(string name) { name_ = name; }
	void set_id(int id) { id_ = id; }
	void set_age(int age) { age_ = age; }
	void set_salary(double salary) { salary_ = salary; }

	void Printlnfo() {
		cout << "이름 : " << name_ << "\n아이디 : " << id_ << "\n나이 : " << age_ << "\n급여 : " << salary_ << endl;
	}


private:
	string name_;
	int id_;
	int age_;
	double salary_;

};

int main(void) {

	Employee* e = new Employee("길동", 2022, 12, 102.3);
	e->Printlnfo();

	delete e;

	Employee* pe = new Employee[2];
	pe[0].set_name("길동");
	pe[0].set_id(2201);
	pe[0].set_age(12);
	pe[0].set_salary(100.2);

	pe[1].set_name("길순");
	pe[1].set_id(2210);
	pe[1].set_age(15);
	pe[1].set_salary(230.2);
	for (int i = 0; i < 2; i++) {
		pe[i].Printlnfo();
	}

	delete[] pe;

	return 0;
}
