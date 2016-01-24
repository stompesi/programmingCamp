#include "method.h"

#define PI 3.14

class Circle {
private:
	int aRadius;   // ���� ������ ��

public:
	void SetRadius(int radius);     // �������� �����Ѵ�.
	double GetArea();    // ������ �����Ѵ�.
	int GetRadius();
};

int Circle::GetRadius() { return this->aRadius; }
void Circle::SetRadius(int radius) { this->aRadius = radius; }
double Circle::GetArea() { return PI * aRadius * aRadius; }

// ���� - �����Լ�
void Effector::Problem24() {
	int circle_count;
	int large_circle_count = 0;

	cout << "���� ���� >> ";
	cin >> circle_count;
	Circle* pCircles = new Circle [circle_count];

	for(int i = 0 ; i < circle_count ; i++) {
		int rad;

		cout << "�� "<< i+1 <<"�� ������ >>  ";
		cin >> rad;
		
		pCircles[i].SetRadius(rad);

		if(pCircles[i].GetArea() > 100) {
			large_circle_count++;
		}
	}

	cout << "������ 100���� ū ���� " << large_circle_count << "�� �Դϴ�." << endl;

	for(int i = 0 ; i < circle_count ; i++) {
		if(pCircles[i].GetArea() > 100) {
			cout << "������ " << pCircles[i].GetRadius() << "�� ���� ������ " << pCircles[i].GetArea() << "�Դϴ�." << endl;
		}
	}

	delete pCircles;
}
		

