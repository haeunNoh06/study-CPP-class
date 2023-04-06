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
    //�����ڸ� �������� ������ default�� �Ű������� ���� �����ڰ� ���ǵȴ�
    int studentId;
    string name;
    string telephone;
    string department;
    string home;
    Student() {
        home = "����";
        department = "����Ʈ�����";
        name = "�达";
        studentId = 2211;
        telephone = "123-4567-8912";

    }
    Student(int studentId, string name, string telephone, string department, string home) {
        //this : ��ü �ڱ��ڽ��� ����Ű�� ������(�ּҰ�)
        //��������� �Ű������� �̸��� ���Ƶ� ��������
        this->studentId = studentId;
        this->name = name;
        this->telephone = telephone;
        this->department = department;
        this->home = home;
    }
    // class ��� �Լ��� ���� �� �ִ�
    void print(void) {
        cout << "�̸� : " << name << "\n�� : " << department << "\n�й� : " << studentId <<
            "\n��ȭ��ȣ : " << telephone << "\n���ּ� : " << home << endl;
    }


};

int main(void) {

    //�Ű������� ���� ������
    Student kim = Student();
    //kim.print();
    Student kim2 = Student(2211, "kim", "010-0000-0000", "��", "�ѱ�");
    kim2.print();


    return 0;
}