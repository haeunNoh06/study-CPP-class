#include <iostream>
#include <string>

using namespace std;

// ���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����
// ����ü, Ŭ������ �Ϲ������� �ܾ��� ù ���ڸ� �빮�ڷ� ��
struct Student {
	// struct�� public�� default
	// class�� private�� default
public:
	int id;
	string name;
	string tel;
	string depart;// �а�
	string address;

	void print(void) {
		cout << "�й� : " << id << endl;
		cout << "�̸� : " << name << endl;
		cout << "��ȭ��ȣ : " << tel << endl;
		cout << "�а� : " << depart << endl;
		cout << "�ּ� : " << address << endl;
	}
};

int main(void) {

	// �ڷ��� : Student ( Ŭ���� ���� ���� )
	struct Student stu1;
	stu1.id = 3434;
	stu1.name = "��浿";
	stu1.tel = "010-1234-5618";
	stu1.depart = "�̿��а�";
	stu1.address = "����� ������";
	
	stu1.print();

	

	
	return 0;
} 