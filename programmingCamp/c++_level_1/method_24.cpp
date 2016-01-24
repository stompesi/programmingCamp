#include "method.h"

#define PI 3.14

class Circle {
private:
	int aRadius;   // 원의 반지름 값

public:
	void SetRadius(int radius);     // 반지름을 설정한다.
	double GetArea();    // 면적을 리턴한다.
	int GetRadius();
};

int Circle::GetRadius() { return this->aRadius; }
void Circle::SetRadius(int radius) { this->aRadius = radius; }
double Circle::GetArea() { return PI * aRadius * aRadius; }

// 문제 - 실행함수
void Effector::Problem24() {
	int circle_count;
	int large_circle_count = 0;

	cout << "원의 개수 >> ";
	cin >> circle_count;
	Circle* pCircles = new Circle [circle_count];

	for(int i = 0 ; i < circle_count ; i++) {
		int rad;

		cout << "원 "<< i+1 <<"의 반지름 >>  ";
		cin >> rad;
		
		pCircles[i].SetRadius(rad);

		if(pCircles[i].GetArea() > 100) {
			large_circle_count++;
		}
	}

	cout << "면적이 100보다 큰 원은 " << large_circle_count << "개 입니다." << endl;

	for(int i = 0 ; i < circle_count ; i++) {
		if(pCircles[i].GetArea() > 100) {
			cout << "반지름 " << pCircles[i].GetRadius() << "인 원의 면적은 " << pCircles[i].GetArea() << "입니다." << endl;
		}
	}

	delete pCircles;
}
		

