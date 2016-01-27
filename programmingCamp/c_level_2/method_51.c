#include "method.h"
#define N 10

int checkAnswer_51(int arr[N][N], int q, int i);

int problem_51(){
	int i;
	int answer[N][N] = {
		{ 1, 3, 2, 3, 4, 2, 3, 1, 4, 1},
		{ 1, 1, 2, 2, 4, 2, 3, 1, 4, 2},
		{ 2, 3, 2, 3, 4, 2, 3, 1, 4, 2}, 
		{ 1, 3, 2, 2, 4, 1, 3, 2, 4, 2}, 
		{ 1, 3, 2, 3, 4, 2, 3, 3, 4, 3}, 
		{ 1, 2, 2, 2, 4, 3, 3, 4, 4, 3}, 
		{ 1, 3, 2, 3, 4, 2, 3, 1, 4, 2}, 
		{ 1, 3, 2, 3, 3, 2, 3, 1, 4, 2},
		{ 3, 3, 3, 3, 3, 2, 2, 1, 4, 2}, 
		{ 4, 4, 4, 4, 4, 3, 4, 1, 4, 2} };
	
	printf("답안 통계\n");
	printf("===============================================\n");
	printf("문항\t1\t2\t3\t4\n");
	printf("===============================================\n");
	for(i = 0 ; i < 10 ; i++) {
		printf("%d번\t%d\t%d\t%d\t%d\n", i+1, checkAnswer_51(answer, i, 1),checkAnswer_51(answer, i, 2), checkAnswer_51(answer, i, 3), checkAnswer_51(answer, i, 4));
	}

	return 0;
}

int checkAnswer_51(int arr[N][N], int q, int i) {
	int  j, count = 0;
	for(j = 0 ; j < N ; j++) {
		if(arr[j][q] == i){
			count++;
		}
	}
	return count;
}