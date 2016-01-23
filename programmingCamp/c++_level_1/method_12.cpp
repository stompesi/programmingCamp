#include "method.h"

class MyInteger {
	int value;
public:
	MyInteger(int value);
	int GetValue();
	bool IsEven();
	bool IsOdd();
	static bool IsEven(int value);
	static bool IsOdd(int value);
	static bool IsEven(MyInteger myInteger);
	static bool IsOdd(MyInteger myInteger);
	bool Equals(int value);
	bool Equals(MyInteger myInteger);
};

MyInteger::MyInteger(int value) {
	this->value = value;
}

int MyInteger::GetValue() {
	return value;
}

bool MyInteger::IsEven() {
	if(this->value % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}

bool MyInteger::IsOdd() {
	if(this->value % 2 == 1) {
		return true;
	}
	else {
		return false;
	}
}

bool MyInteger::IsEven(int value) {
	if(value % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}

bool MyInteger::IsOdd(int value) {
	if(value % 2 == 1) {
		return true;
	}
	else {
		return false;
	}
}

bool MyInteger::IsEven(MyInteger myInteger) {
	if(myInteger.value % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}

bool MyInteger::IsOdd(MyInteger myInteger) {
	if(myInteger.value % 2 == 1) {
		return true;
	}
	else {
		return false;
	}
}

bool MyInteger::Equals(int value) {
	if(this->value == value) {
		return true;
	}
	else {
		return false;
	}
}

bool MyInteger::Equals(MyInteger myInteger) {
	if(this->value == myInteger.value) {
		return true;
	}
	else {
		return false;
	}
}
void Effector::Problem12() {
	int first_number, second_number;

	cout << "==>input an integer : ";
	cin >> first_number;

	MyInteger first_integer(first_number);
	cout << "first integer is : " << first_number << endl;
	cout << "\t\t--> " << first_number << " is ";
	if(first_integer.IsEven()) {
		cout << "Even.";
	}
	else {
		cout << "Odd.";
	}
	cout << " ( by calling object.isEven() )" << endl;

	cout << "first integer is : " << first_number << endl;
	cout << "\t\t--> " << first_number << " is ";
	if(MyInteger::IsEven(first_integer)) {
		cout << "Even.";
	}
	else {
		cout << "Odd.";
	}
	cout << " ( by calling MyInteger::isEven(first_object) )" << endl;

	cout << "--------------------------------------------------------" << endl;

	cout << "==>input an integer : ";
	cin >> second_number;

	MyInteger second_integer(second_number);
	cout << "second integer is : " << second_number << endl;
	cout << "\t\t--> " << second_number << " is ";
	if(second_integer.IsEven()) {
		cout << "Even.";
	}
	else {
		cout << "Odd.";
	}
	cout << " ( by calling object.isEven() )" << endl;

	cout << "first integer is : " << second_number << endl;
	cout << "\t\t--> " << second_number << " is ";
	if(MyInteger::IsEven(second_integer)) {
		cout << "Even.";
	}
	else {
		cout << "Odd.";
	}
	cout << " ( by calling MyInteger::isEven(second_object) )" << endl;

	cout << "--------------------------------------------------------" << endl;

	cout << "first integer (" << first_number << ") by calling MyInteger::isEven( first_object ): ==> ";
	if(MyInteger::IsEven(first_integer)) {
		cout << "Even. " << endl;
	}
	else {
		cout << "Odd. " << endl;
	}

	cout << "second integer (" << second_number << ") by calling MyInteger::isEven( second_object.getValue() ): ==> ";
	if(MyInteger::IsEven(second_integer.GetValue())) {
		cout << "Even. " << endl;
	}
	else {
		cout << "Odd. " << endl;
	}

	cout << "--------------------------------------------------------" << endl;

	cout << "first_object.equal( second_object.getValue() ) = ";
	if(first_integer.Equals(second_integer.GetValue())) {
		cout << "True. " << endl;
	}
	else {
		cout << "False. " << endl;
	}
	cout << "first_object.equal( second_object ) = ";
	if(first_integer.Equals(second_integer)) {
		cout << "True. " << endl;
	}
	else {
		cout << "False. " << endl;
	}



}
