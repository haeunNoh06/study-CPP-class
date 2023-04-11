//C++
#include<iostream>
#include<string> // std::string Ŭ����

using namespace std;


// ���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����
// ����ü, Ŭ������ �Ϲ������� �ܾ��� ù ���ڸ� �빮�ڷ� �սô�
// class�� ����Ʈ private (struct�� ����Ʈ�� public)
class Student {
    // ���ɶ����� studentId�� ���ڿ��� ���� ����
    // �Ϲ������� ���ڿ��� ������ �����ͺ��� ���� �޸� ������ �䱸�ϸ�
    // ������ �񱳿����� �ѹ��� �� �� ������, ���ڿ��� ���ڼ� ��ŭ �ݺ��Ͽ� ���ؾ���

public:
    //������ (constructor) : ��ü�� ������ �� ȣ��Ǵ� �Լ�
    // �����ڴ� ��ȯ���� ���� �ʴ´�.
    //�����ڸ� �������� ������ default�� �Ű������� ���� �����ڰ� ���ǵȴ�
    int studentId;
    string name;
    string telephone;
    string department;
    string address;
    Student() {
        address = "����";
        department = "����Ʈ�����";
        name = "�达";
        studentId = 2211;
        telephone = "123-4567-8912";

    }
    Student(int studentId, string name, string telephone, string department, string address) 
        // ������� �ʱ�ȭ. const/������ ������� ��밡��
        : studentId(studentId), name(name), telephone(telephone), department(department), address(address)
    {
        
    }
    // class ��� �Լ��� ���� �� �ִ�
    void print(void) {
        cout << "�̸� : " << name << "\n�� : " << department << "\n�й� : " << studentId <<
            "\n��ȭ��ȣ : " << telephone << "\n���ּ� : " << address << endl;
    }


};

int main(void) {

    //�Ű������� ���� ������
    Student kim = Student();

    // �����Ҵ� : ������ �ð��� �޸� ũ�Ⱑ ����
    //Student kim2 = Student(2211, "kim", "010-0000-0000", "����Ʈ�����", "�ѱ�");
    //kim2.print();

    // �����Ҵ� : ����ð�(runtime)�� �޸� ũ�Ⱑ ����(�޸� heap����)
    // �����Ҵ�� ������ �����ͷ� �����Ѵ�.
    Student* stu3 = new Student(22, "����", "010-1234-5678", "������", "�Ѽ���");
    stu3->print();

    // �����Ҵ� ����(�� �ϸ� �޸� �������� �߻�)
    delete stu3;

    return 0;
}

/**
* this
* ������� �ʱ�ȭ : const/���� ������� ��밡�� �ʱ�ȭ �� �� �����ؾ� ��
* 
*/