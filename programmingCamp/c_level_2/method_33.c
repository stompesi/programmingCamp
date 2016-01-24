#include "method.h"

/*
*	�ΰ��� ������ ���Ϸ� ���� ���� 0.0000001����
*	������������ ���Ϸ� ���� ���� ���
*/

double factorial(int n);

int problem_33(){
	int i;
	double fact1 = 1, fact2;
	double sum = 1, j;

	for(i = 2; ;i++){
		fact2 = factorial(i);
		sum += 1.0/fact2;
		j = 1.0/fact1 - 1.0/fact2;
//		printf("%.10lf\n", j);
		fact1 = fact2;
		if(j < 0.0000001){
			break;
		}
	}
	printf("%.10lf\n", sum);

	return 0;
}
double factorial(int n){
	int i;
	double result = 1;

	for(i = 1; i <= n; i++){
		result = result * i;
	}

	return result;
}