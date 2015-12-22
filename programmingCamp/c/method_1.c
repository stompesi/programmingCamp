#include "method.h"

int problem_1() {
	int year;

	scanf("%d", &year);

	// 4로 나누어 떨어지면서 : year % 4 == 0
	// 100으로 나누어 떨어지지 않는 : year % 100 != 0
	// 것이 윤년
	if((year % 4 == 0) && (year % 100 != 0)) {
		printf("윤년\n");   
	} else {
	  printf("평년\n");
	}
	return 0; 
}