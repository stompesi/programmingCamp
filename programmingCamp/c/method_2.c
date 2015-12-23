#include "method.h"

int problem_2() {
	double a, b, c;

	printf("세 변의 길이를 입력하세요 : ");

	scanf("%lf %lf %lf", &a, &b, &c);

	// 가장 큰 변이 나머지 두 변의 합보다 작아야 삼각형이 성립
	// 가장 큰 변의 제곱이 두 변의 제곱의 합과 같아야 직각 삼각형이 성립
	// 두 변의 길이만 같으면 이등변 삼각형, 다른 하나도 같으면 정삼각형
	// 나머지는 일반 삼각형

	if (a + b <= c || a + c <= b || b + c <= a) {
		printf("삼각형 아님\n");
	}
	else if (a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a) {
		printf("직각삼각형\n");
	}
	else if (a == b || a == c || b == c) {
		if (a == b && b == c) {
			printf("정삼각형\n");
		} else {
			printf("이등변 삼각형\n");
		}
	} else {
		printf("일반 삼각형\n");
	}	
	
	return 0;
}