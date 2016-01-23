#include"method.h"

class Circle {
	int radius;
public:
	Circle(int radius = 0) {
		this->radius = radius;
	}
	void show() {
		cout << "radius = " << radius << " �� ��" << endl;
	}
	friend Circle& operator ++(Circle& circle);
	friend Circle& operator ++(Circle& circle, int x);
	friend Circle& operator --(Circle& circle);
	friend Circle& operator --(Circle& circle, int x);
};

Circle& operator ++(Circle& circle) {
	circle.radius++;
	return circle;
}

Circle& operator ++(Circle& circle, int x) {
	Circle temp = circle;
	circle.radius++;
	return temp;
}

Circle& operator --(Circle& circle) {
	circle.radius--;
	return circle;
}

Circle& operator --(Circle& circle, int x) {
	Circle temp = circle;
	circle.radius--;
	return temp;
}

void Effector::Problem29() {
	Circle a(5), b(4);
	++a;
	b = a++;
	a.show();
	b.show();
	Circle c(a);
	Circle d = b;
	--c;
	d = c--;
	c.show();
	d.show();
}


