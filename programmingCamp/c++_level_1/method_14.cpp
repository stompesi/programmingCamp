#include "method.h"

template <class T>
T biggerValue(T a, T b) {
	if(a > b) {
		return a;
	}
	else {
		return b;
	}
}

void Effector::Problem14() {
	int int_a, int_b;
	double real_a, real_b;
	char char_a, char_b;
	string string_a, string_b;

	cout << "input 2 integers: ";
	cin >> int_a >> int_b;
	cout << "Bigger value between " << int_a << " and " << int_b << " is ==> " << biggerValue(int_a, int_b) << endl;

	cout << "input 2 real numbers: ";
	cin >> real_a >> real_b;
	cout << "Bigger value between " << real_a << " and " << real_b << " is ==> " << biggerValue(real_a, real_b) << endl;

	cout << "input 2 characters: ";
	cin >> char_a >> char_b;
	cout << "Bigger value between " << char_a << " and " << char_b << " is ==> " << biggerValue(char_a, char_b) << endl;

	cout << "input 2 strings: ";
	cin >> string_a >> string_b;
	cout << "Bigger value between " << string_a << " and " << string_b << " is ==> " << biggerValue(string_a, string_b) << endl;
}
