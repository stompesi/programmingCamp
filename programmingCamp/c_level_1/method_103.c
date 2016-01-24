#include "method.h"

int problem_103() {
	double width, height, area = 0;
	
	printf("밑변, 높이 : ");
	scanf("%lf %lf", &width, &height);

	area = width * height / 2;

	printf("밑변=%.2lfcm, 높이=%.2lfcm인 삼각형의 면적=%.2lfcm²\n", width, height, area);

	return 0;
}