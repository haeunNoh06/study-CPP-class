#include <iostream>
#include <string>

using namespace std;

// ���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����
// ����ü, Ŭ������ �Ϲ������� �ܾ��� ù ���ڸ� �빮�ڷ� ��
struct Student {
	// ���ɶ����� id�� ���ڿ��� ���� ����
	// �Ϲ������� ���ڿ��� ������ �����ͺ��� ���� �޸� ������ �䱸�ϸ�
	// ������ �� ������ �� ���� �� �� �ִµ� ���ڿ��� ���ڼ� ��ŭ �ݺ��Ͽ� ���ؾ���
	int id;
	string name;
	string tel;
	string depart;// �а�
	string address;
};

int main(void) {

	// �ڷ��� : struct Student ( ������ C++������ Student�� �ᵵ ���� )
	struct Student student;
	student.id = 3434;
	student.name = "��浿";
	student.tel = "010-1234-5618";
	student.depart = "�̿��а�";
	student.address = "����� ������";
	
	cout << "�й� : " << student.id << endl;
	cout << "�̸� : " << student.name << endl;
	cout << "��ȭ��ȣ : " << student.tel << endl;
	cout << "�а� : " << student.depart << endl;
	cout << "�ּ� : " << student.address << endl;

	
	return 0;
} 