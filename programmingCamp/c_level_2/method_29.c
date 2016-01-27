#include "method.h"
#include <malloc.h>

struct complex_number {
	double real;
	double imagine;
};

struct complex_number add(struct complex_number op1, struct complex_number op2);
struct complex_number subtract(struct complex_number op1, struct complex_number op2);
struct complex_number multiply(struct complex_number op1, struct complex_number op2);
double absolute(struct complex_number op);

int problem_29() {
	struct complex_number op1 = { 4.50, 5.60 };
	struct complex_number op2 = { -3.70, - 5.50 };
	struct complex_number result;
	
	printf("29. º¹¼Ò¼ö ´õÇÏ±â, »©±â, °öÇÏ±â, Àý´ë°ª °è»ê ÇÁ·Î±×·¥.\n");
	
	result = add(op1, op2);
	printf("1) µ¡¼À : (%-.2lf %+.2lfi) + (%-.2lf %+.2lfi) = (%-.2lf %+.2lfi)\n", op1.real, op1.imagine, op2.real, op2.imagine, result.real, result.imagine);
	result = subtract(op1, op2);
	printf("2) »¬¼À : (%-.2lf %+.2lfi) - (%-.2lf %+.2lfi) = (%-.2lf %+.2lfi)\n", op1.real, op1.imagine, op2.real, op2.imagine, result.real, result.imagine);
	result = multiply(op1, op2);
	printf("3) °ö¼À : (%-.2lf %+.2lfi) * (%-.2lf %+.2lfi) = (%-.2lf %+.2lfi)\n", op1.real, op1.imagine, op2.real, op2.imagine, result.real, result.imagine);
	printf("4) Àý´ë °ª : |(%-.2lf %+.2lfi)| = %-.3lf, |(%-.2lf %+.2lfi)| = %-.3lf\n", op1.real, op1.imagine, absolute(op1), op2.real, op2.imagine, absolute(op2));

	return 0;
}

struct complex_number add(struct complex_number op1, struct complex_number op2) {
	struct complex_number result;

	result.real = op1.real + op2.real;
	result.imagine = op1.imagine + op2.imagine;

	return result;
}

struct complex_number subtract(struct complex_number op1, struct complex_number op2) {
	struct complex_number result;

	result.real = op1.real - op2.real;
	result.imagine = op1.imagine - op2.imagine;

	return result;
}

struct complex_number multiply(struct complex_number op1, struct complex_number op2) {
	struct complex_number result;

	result.real = op1.real * op2.real - op1.imagine * op2.imagine;
	result.imagine = op1.real * op2.real + op1.imagine * op2.imagine;

	return result;
}

double absolute(struct complex_number op) {
	return sqrt(op.real * op.real + op.imagine * op.imagine);
}