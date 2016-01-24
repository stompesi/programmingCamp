#include "method.h"

int problem_41() {
	int salary;
	int tax = 0;

	printf("연봉을 입력하면 납부할 세금을 출력하는 프로그램\n");
	printf("연봉을 입력하세요 : ");
	scanf("%d", &salary);

	if(salary <= 1000) {
		tax = salary / 100 * 9;
	} else if(salary > 1000 && salary <= 4000) {
		tax = salary / 100 * 18;
	} else if(salary > 4000 && salary <= 8000) {
		tax = salary / 100 * 27;
	} else {
		tax = salary / 100 * 36;
	}

	printf("납부할 세금 : %d 만원\n", tax);

	return 0;
}