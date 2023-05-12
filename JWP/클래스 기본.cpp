//C++
#include<iostream>
#include<string> // std::string Ŭ����

using namespace std;


// ���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����
// ����ü, Ŭ������ �Ϲ������� �ܾ��� ù ���ڸ� �빮�ڷ� �սô�
// class�� ����Ʈ private (struct�� ����Ʈ�� public)
class Student {
    // ���ɶ����� studentId�� ���ڿ��� ���� ����'
    // �Ϲ������� ���ڿ��� ������ �����ͺ��� ���� �޸� ������ �䱸�ϸ�
    // ������ �񱳿����� �ѹ��� �� �� ������, ���ڿ��� ���ڼ� ��ŭ �ݺ��Ͽ� ���ؾ���

public:
    //������ (constructor) : ��ü�� ������ �� ȣ��Ǵ� �Լ�
    // �����ڴ� ��ȯ���� ���� �ʴ´�.
    //�����ڸ� �������� ������ default�� �Ű������� ���� �����ڰ� ���ǵȴ�
    Student() {}

    Student(int studentId, string name, string telephone, string department, string address) 
        // ������� �ʱ�ȭ. const/������ ������� ��밡��
        : studentId(studentId), name(name), telephone(telephone), department(department), address(address)
    {
        
    }

    void set_studentId(int _studentId) { studentId = _studentId; }
    void set_name(string _name) { name = _name; }
    void set_telephone(string _telephone) { telephone = _telephone; }
    void set_department(string _department) { department = _department; }
    void set_address(string _address) { address = _address; }

    // class ��� �Լ��� ���� �� �ִ�
    void print(void) {
        cout << "�̸� : " << name << "\n�� : " << department << "\n�й� : " << studentId <<
            "\n��ȭ��ȣ : " << telephone << "\n���ּ� : " << address << endl;
    }

private:
    int studentId;
    string name;
    string telephone;
    string department;
    string address;

};

int main(void) {

    //�Ű������� ���� ������
    Student kim = Student();

    // �����Ҵ� : ������ �ð��� �޸� ũ�Ⱑ ����
    //Student kim2 = Student(2211, "kim", "010-0000-0000", "����Ʈ�����", "�ѱ�");
    //kim2.print();


    /*Student stu3[2];
    for (int i = 0; i < sizeof(stu3)/sizeof(stu3[0]); i++) {
        stu3[i].print();
    }*/


    // �����Ҵ� : ����ð�(runtime)�� �޸� ũ�Ⱑ ����(�޸� heap����)
    // �����Ҵ�� ������ �����ͷ� �����Ѵ�.
    //Student* stu3 = new Student(22, "����", "010-1234-5678", "������", "�Ѽ���");
    //stu3->print();
    //// �����Ҵ� ����(�� �ϸ� �޸� �������� �߻�)
    //delete stu3;
    
    Student* stu4 = new Student[2];

    stu4[0].set_studentId(2030);
    stu4[0].set_name("�浿��");
    stu4[0].set_telephone("010-1234-1234");
    stu4[0].set_department("�װ���");
    stu4[0].set_address("�����");
    
    
    
    stu4[1].set_studentId(2033);
    stu4[1].set_name("������");
    stu4[1].set_telephone("010-4444-777");
    stu4[1].set_department("�����ΰ�");
    stu4[1].set_address("�泲");

    for (int i = 0; i < 2; i++) {
        stu4[i].print();    // �迭�� ��ҿ� �ش��ϴ� ��ü�� ����� .���� ����
    }


    delete[] stu4;

    return 0;
}

/**
* this
* ������� �ʱ�ȭ : const/���� ������� ��밡�� �ʱ�ȭ �� �� �����ؾ� ��
* 
*/