#include "method.h"

class Add {
	int a;
	int b;
public:
	void SetValue(int x, int y);
	int Calculate();
};

void Add::SetValue(int x, int y) {
	this->a = x;
	this->b = y;
}

int Add::Calculate() {
	return a + b;
}

class Sub {
	int a;
	int b;
public:
	void SetValue(int x, int y);
	int Calculate();
};

void Sub::SetValue(int x, int y) {
	this->a = x;
	this->b = y;
}

int Sub::Calculate() {
	return a - b;
}

class Mul {
	int a;
	int b;
public:
	void SetValue(int x, int y);
	int Calculate();
};

void Mul::SetValue(int x, int y) {
	this->a = x;
	this->b = y;
}

int Mul::Calculate() {
	return a * b;
}

class Div {
	int a;
	int b;
public:
	void SetValue(int x, int y);
	int Calculate();
};

void Div::SetValue(int x, int y) {
	this->a = x;
	this->b = y;
}

int Div::Calculate() {
	return a / b;
}


void Effector::Problem23() {
	Add a;
	Sub s;
	Mul m;
	Div d;
	int x, y;
	char op;

	while(true) {
		cout << "두 정수와 연산자를 입력하세요(종료하려면 연산자를 $ 으로). >> ";
		cin >> x >> y >> op;

		switch(op) {
		case '+':
			a.SetValue(x, y);
			cout << a.Calculate() << endl;
			break;
		case '-':
			s.SetValue(x, y);
			cout << s.Calculate() << endl;
			break;
		case '*':
			m.SetValue(x, y);
			cout << m.Calculate() << endl;
			break;
		case '/':
			d.SetValue(x, y);
			cout << d.Calculate() << endl;
			break;
		case '$':
			exit(0);
		}
	}
}
