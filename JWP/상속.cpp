#include <iostream>

using namespace std;

class Animal {
public:
	Animal(int age, string name) : age_(age), name_(name)
	{ 
		cout << "동물 생성자" << endl;
	}

	// 소멸자에는 무조건 virtual을 넣자(메모리 누수 방지)
	virtual ~Animal() { cout << "동물 소멸자" << endl; }

	// 동적 바인딩(가상함수)
	virtual void Bark(void) = 0;
	virtual void Eat(void) = 0;
	virtual void Hunt(void) = 0;
private:
	int age_;
	string name_;
};

// 두루미
class Crane : public Animal {
public:
	// 별도의 언급이 없어도 매개변수가 없는 부모생성자가 호출된다.
	Crane(int age, string name, int leg_length) : Animal(age, name)
	{ 
		cout << "두루미 생성자" << endl; 
		leg_length_ = leg_length;
	}
	virtual ~Crane() { cout << "두루미 소멸자" << endl; }

	// 오타같은 실수를 방지하기 위해 override 키워드 사용 (Java의 @Override)
	void Bark() override {
		cout << "두루두루" << endl;
	}

	// 순수 가상함수(추상메서드)는 반드시 자식에서 구현해야 한다.
	void Eat() override {}
	void Hunt() override {}

private:
	int leg_length_;
};

int main(void) {

	// Crane c = Crane(1, "1", 1);
	// c.Bark();

	// Animal* animal = new Animal(18, "동물이");
	// animal->Bark();	// 두루두루
	// delete animal;// 포인터가 지워지는 게 아님

	// (중요!!!!!!!!) 추상클래스(하나라도 추상메서드가 존재하는 클래스)는 객체(인스턴스)를 만들 수 없다.
	Animal* animal = new Animal(1, "1");

	Animal* animal = new Crane(3, "지우", 108);
	animal->Bark();	// 두루두루
	delete animal;// 포인터가 지워지는 게 아님

	// animal = new Crane(3, "지우", 108);
	// animal->Bark();	// 동물 짖는다(정적 바인딩으로 인해 부모의 멤버함수를 호출)
	// delete animal;

	//Crane* crane = new Crane(3,"지우", 108);	// 부모의 멤버변수를 사용
	//crane->Eat(); // 부모의 멤버함수를 사용
	//delete crane;

	return 0;
}