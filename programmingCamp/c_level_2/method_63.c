#include "method.h"

/*
*	�Ǻ���ġ ������ ������ ���� 0.000001�̸�����
*	�����Ҷ��� n���� Ȳ�ݺ��Һ� ���ϴ� ���α׷�
*/
int Fibo(int n);
double R(int n);

int problem_63(){
	int n = 2;
	double r2, r1, result = 0;

//	printf("%d / %d = %lf\n", Fibo(2), Fibo(3), R(3));

	do{
		n++;
		r2 = R(n);
		r1 = R(n-1);
		result = r2 - r1;
		printf("R(%2d)=%.10lf - R(%2d)=%.10lf = ", n, r2, n-1, r1);
		if(result < 0){
			result = (-1) * result;
			printf("-%.10lf\n", result);
		}
		else{
			printf("+%.10lf\n", result);
		}
	}while(result > 0.000001);
	
	printf("n = %d�϶� Ȳ�ݺ��Һ� Fibo(%d) / Fibo(%d) = %.10lf\n", n, n-1, n, r2);

	return 0;
}
int Fibo(int n){
	if(n == 0){
		return 0;
	}
	else if(n == 1){
		return 1;
	}
	else{
		return Fibo(n-1) + Fibo(n-2);
	}
}
double R(int n){
	if(n > 1){
		return (double)Fibo(n-1) / Fibo(n);
	}
	else{
		printf("�Ű������� ������ ������ϴ�.\n");
		exit(0);
	}
}