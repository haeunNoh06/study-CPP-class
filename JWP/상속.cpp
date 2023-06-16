#include <iostream>

using namespace std;

class Animal {
public:
	Animal(int age, string name) : age_(age), name_(name)
	{ 
		cout << "���� ������" << endl;
	}

	// �Ҹ��ڿ��� ������ virtual�� ����(�޸� ���� ����)
	virtual ~Animal() { cout << "���� �Ҹ���" << endl; }

	// ���� ���ε�(�����Լ�)
	virtual void Bark(void) { cout << "���� ¢�´�." << endl; }
	virtual void Eat(void) { cout << "���� �Դ´�." << endl; }
	virtual void Hunt(void) { cout << "���� ����Ѵ�." << endl; }
private:
	int age_;
	string name_;
};

// �η��
class Crane : public Animal {
public:
	// ������ ����� ��� �Ű������� ���� �θ�����ڰ� ȣ��ȴ�.
	Crane(int age, string name, int leg_length) : Animal(age, name)
	{ 
		cout << "�η�� ������" << endl; 
		leg_length_ = leg_length;
	}
	virtual ~Crane() { cout << "�η�� �Ҹ���" << endl; }

	// ��Ÿ���� �Ǽ��� �����ϱ� ���� override Ű���� ��� (Java�� @Override)
	void Bark() override {
		cout << "�η�η�" << endl;
	}

private:
	int leg_length_;
};

int main(void) {

	// Crane c = Crane(1, "1", 1);
	// c.Bark();

	Animal* animal = new Animal(18, "������");
	animal->Bark();	// �η�η�
	delete animal;// �����Ͱ� �������� �� �ƴ�

	// animal = new Crane(3, "����", 108);
	// animal->Bark();	// ���� ¢�´�(���� ���ε����� ���� �θ��� ����Լ��� ȣ��)
	// delete animal;

	//Crane* crane = new Crane(3,"����", 108);	// �θ��� ��������� ���
	//crane->Eat(); // �θ��� ����Լ��� ���
	//delete crane;

	return 0;
}