#include<iostream>
using namespace std;
#define PI 3.14
class Circle {
	int aRadius;   // ���� ������ ��
public:
	void   SetRadius(int radius);     // �������� �����Ѵ�.
	double GetArea();    // ������ �����Ѵ�.
	int GetRadius();
};
int Circle::GetRadius(){
	return this->aRadius;
}
void Circle::SetRadius(int radius){
	this->aRadius = radius;
}
double Circle::GetArea(){
	return PI * aRadius * aRadius;
}
void problem_24(){
	int circle_count;
	cout<<"���� ���� >> ";
	cin>>circle_count;
	Circle *ptr = new Circle [circle_count];
	int largeCircleCount = 0;

	for(int i = 0 ; i < circle_count ; i++){
		cout<<"�� "<<i+1<<"�� ������ >>  ";
		int rad;
		cin>>rad;
		ptr[i].SetRadius(rad);
		if(ptr[i].GetArea() > 100)
			largeCircleCount++;
	}

	cout<<"������ 100���� ū ���� "<<largeCircleCount<<"�� �Դϴ�."<<endl;
	for(int i = 0 ; i < circle_count ; i++){
		if(ptr[i].GetArea() > 100)
			cout<<"������ "<<ptr[i].GetRadius()<<"�� ���� ������ "<<ptr[i].GetArea()<< "�Դϴ�."<<endl;
	}
	delete ptr;
}
		

