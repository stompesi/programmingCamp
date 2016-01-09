#include "method.h"
#include <math.h>

double get_hypotenuse(double base, double height);

int problem_11() {
	// base : 밑변, height : 높이, hypotenuse : 빗변
	double base, height, hypotenuse;

	printf("직각 삼각형의 빗변의 길이를 구하는 프로그램.\n");

	printf("삼각형 밑변 : ");
	scanf("%lf", &base);
	printf("삼각형 높이 : ");
	scanf("%lf", &height);

	hypotenuse = get_hypotenuse(base, height);

	printf("빗변의 길이는 %.3lf", hypotenuse);
}

double get_hypotenuse(double base, double height) {
	return sqrt(base*base + height*height);
}