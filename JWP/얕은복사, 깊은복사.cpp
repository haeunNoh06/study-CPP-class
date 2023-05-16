#include <iostream>

using namespace std;

int main(void) {
	// int 3개짜리 공간을 동적할당 한 후 ptr1이 가리킨다.
	int* ptr1 = new int[3];
	ptr1[0] = 0, ptr1[1] = 10, ptr1[2] = 20;

	// ptr1이 가리키는 주소값ㅇ르 ptr2도 가지게 됨
	// 별도의 공간을 만들지 않고, ptr1의 주소값만 복사함(얕은 복사, shallow copy)
	//int* ptr2 = ptr1;

	// 별도의 공간을 동적할당 한 후 ptr1이 가리키는 내용물을 복사한다(깊은 복사, deep copy)
	int* ptr2 = new int[3];
	for (int i = 0; i < 3; i++) {
		ptr2[i] = ptr1[i];
	}

	// 얕은 복사를 하면 원본데이터가 손실될 수 있다.
	// 깊은 복사를 하면 원본데이터가 유지될 수 있다.
	ptr2[1] = 100;
	for (int i = 0; i < 3; i++) {
		cout << "ptr1 : " << ptr1[i] << ", ptr2 : " << ptr2[i] << "\n" << endl;
	}

	delete[] ptr2;// 가급적 늦게 할당한 ptr2를 해제해주기
	delete[] ptr1;
	// 얕은복사 : 이미 해제된 공간을 또 해제하려고 하니 에러가 발생함
	// 깊은복사 : 각각 별도의 공간이 만들어졌으므로 delete를 각각 해준다.
	return 0;
}