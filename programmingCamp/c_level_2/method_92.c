#include "method.h"

typedef struct {
	int real;
	int imag;
} COMPLEX;

void print_complex(COMPLEX complex) {
	printf("(%-d %+di)\n", complex.real, complex.imag);
}

COMPLEX add_complex(COMPLEX a, COMPLEX b) {
	COMPLEX tmp;

	tmp.real = a.real + b.real;
	tmp.imag = a.imag + b.imag;

	return tmp;
}

int problem_92() {
	COMPLEX a, b, c;
	a.real = -3;
	a.imag = -2;
	b.real = -4;
	b.imag = -5;

	printf("a=");
	print_complex(a);
	printf("b=");
	print_complex(b);

	c = add_complex(a, b);

	printf("c=");
	print_complex(c);

	return 0;
}