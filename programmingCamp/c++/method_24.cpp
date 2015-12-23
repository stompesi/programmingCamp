#include<iostream>
using namespace std;
#define PI 3.14
class Circle {
	int aRadius;   // 원의 반지름 값
public:
	void   SetRadius(int radius);     // 반지름을 설정한다.
	double GetArea();    // 면적을 리턴한다.
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
	cout<<"원의 개수 >> ";
	cin>>circle_count;
	Circle *ptr = new Circle [circle_count];
	int largeCircleCount = 0;

	for(int i = 0 ; i < circle_count ; i++){
		cout<<"원 "<<i+1<<"의 반지름 >>  ";
		int rad;
		cin>>rad;
		ptr[i].SetRadius(rad);
		if(ptr[i].GetArea() > 100)
			largeCircleCount++;
	}

	cout<<"면적이 100보다 큰 원은 "<<largeCircleCount<<"개 입니다."<<endl;
	for(int i = 0 ; i < circle_count ; i++){
		if(ptr[i].GetArea() > 100)
			cout<<"반지름 "<<ptr[i].GetRadius()<<"인 원의 면적은 "<<ptr[i].GetArea()<< "입니다."<<endl;
	}
	delete ptr;
}
		

