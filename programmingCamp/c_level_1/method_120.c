#include "method.h"
#define N 10

int problem_120() {
	int data[N] = { 60, 90, 100, 70, 79, 80, 80, 95, 75, 88 };
	int rank[N] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
	double average = 0;
	double deviation[N] = { 0 };
	int i, j, sum = 0;

	for(i = 0 ; i < N ; i++) {
		sum += data[i];
	}
	average = (double)sum / N;

	for(i = 0 ; i < N ; i++) {
		deviation[i] = data[i] - average;
	}

	for(i = 0 ; i < N ; i++) {
		for(j = 0 ; j < N ; j++) {
			if(data[i]<data[j]) {
				rank[i]++;
			}
		}
	}

	printf("번호 점수    편차 석차\n");
	for(i = 0 ; i < N ; i++) {
		printf("%3d%5d   %6.2lf  %3d\n", i + 1, data[i], deviation[i], rank[i]);
	}
	
	return 0;

}