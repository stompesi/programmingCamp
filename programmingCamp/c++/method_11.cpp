#include<iostream>

using namespace std;

class IntStorage{
	int *apValue;
	int aSize;
public:
	IntStorage(int n);
	~IntStorage();
	void read();		//�������� �䱸�Ѵ�� ǥ��.
	void write();
	int Max();
};
int IntStorage::Max(){
	int max = apValue[0];
	for(int i = 0 ; i < aSize ; i++)
		(apValue[i] > max)?max=apValue[i]:max=max;
	return max;
}
void IntStorage::read(){
	cout<<endl;
	for(int i = 0 ; i < aSize ; i++)
		cin>>apValue[i];
}
void IntStorage::write(){
	cout<<endl;
	for(int i = 0 ; i < aSize ; i++)
		cout<<apValue[i]<<endl;
}
IntStorage::IntStorage(int n){
	this->aSize = n;
	this->apValue = new int[aSize];
}
IntStorage::~IntStorage(){
	delete [] apValue;
}

void problem_11(){
	int n;
	cout<< "�� ���� ������ ���� �ϰڽ��ϱ�?"<<endl;
	cin >> n;
	IntStorage s(n);
	cout<<"input "<<n<<" integers ";
	s.read();
	cout<<"�Է��� ������ :";
	s.write();
	cout<<"���� ū ���� = "<<s.Max() <<endl;
}
