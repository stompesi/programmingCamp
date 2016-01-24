#include "method.h"

class IntStorage {
private:
	int *apValue;
	int aSize;

public:
	IntStorage(int n);
	~IntStorage();
	void Read();		//�������� �䱸�Ѵ�� ǥ��.
	void Write();
	int Max();
};
int IntStorage::Max() {
	int max = apValue[0];

	for(int i = 0 ; i < aSize ; i++) {
		max = (apValue[i] > max) ? apValue[i] : max;
	}

	return max;
}
void IntStorage::Read() {
	for(int i = 0 ; i < aSize ; i++) {
		cin >> apValue[i];
	}
}
void IntStorage::Write() {
	
	for(int i = 0 ; i < aSize ; i++) {
		cout << apValue[i];
		if(i != aSize - 1) {
			cout << ", ";
		}
	}
	cout << endl;
}
IntStorage::IntStorage(int n) {
	this->aSize = n;
	this->apValue = new int[aSize];
}
IntStorage::~IntStorage() {
	delete [] apValue;
}

void Effector::Problem11() {
	int n;
	cout << "�� ���� ������ ���� �ϰڽ��ϱ�?" << endl;
	cin >> n;

	IntStorage s(n);

	cout <<"input "<< n <<" integers ";
	s.Read();

	cout<<"�Է��� ������ : ";
	s.Write();

	cout << "���� ū ���� = " << s.Max() << endl;
}
