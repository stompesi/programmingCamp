#include "method.h"
#include "tool1.h"
#include "tool2.h"

void Effector::Problem8() {
	double a = 0.5, b = 10.5;

	cout << "Caling function of TOOL1!" << endl;
	cout << "Result: " << a << " + " << b << " = " << TOOL1::calculate(a, b) << endl;
	cout << "---------------------------" << endl;
	cout << "Caling function of TOOL2!" << endl;
	cout << "Result: " << a << " * " << b << " = " << TOOL2::calculate(a, b) << endl;
}
