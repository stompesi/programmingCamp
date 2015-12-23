#include<iostream>

using namespace std;

class intStorage{
	int *p;
	int size;
public:
	intStorage(int n);
	~intStorage();
	void read();
	void write();
	int Max();
};
int intStorage::Max(){
	int max = p[0];
	for(int i = 0 ; i < size ; i++)
		(p[i] > max)?max=p[i]:max=max;
	return max;
}
void intStorage::read(){
	cout<<endl;
	for(int i = 0 ; i < size ; i++)
		cin>>p[i];
}
void intStorage::write(){
	cout<<endl;
	for(int i = 0 ; i < size ; i++)
		cout<<p[i]<<endl;
}
intStorage::intStorage(int n){
	this->size = n;
	this->p = new int[size];
}
intStorage::~intStorage(){
	delete [] p;
}

void problem_11(){
	int n;
	cout<< "�� ���� ������ ���� �ϰڽ��ϱ�?"<<endl;
	cin >> n;
	intStorage s(n);
	cout<<"input "<<n<<" integers ";
	s.read();
	cout<<"�Է��� ������ :";
	s.write();
	cout<<"���� ū ���� = "<<s.Max() <<endl;
}
