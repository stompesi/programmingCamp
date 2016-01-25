#include "method.h"

/*
*	피보나치 수열의 비율의 차가 0.000001미만으로
*	수렴할때의 n값과 황금분할비를 구하는 프로그램
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
	
	printf("n = %d일때 황금분할비 Fibo(%d) / Fibo(%d) = %.10lf\n", n, n-1, n, r2);

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
		printf("매개변수의 범위를 벗어났습니다.\n");
		exit(0);
	}
}