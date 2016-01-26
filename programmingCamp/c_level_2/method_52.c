#include "method.h"
#define N 10

int checkAnswer(int arr[N][N], int q, int i);
int G_CORRECT_NUMBER[N] = {1, 3, 2, 3, 4, 2, 3, 1, 4, 2};
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
void good_student(){
	int right_count = 0, good_stu = 0, best_score;
	int i, j;
	int score[10] = {0,};
	for(i = 0 ; i < N ; i++){
		for(j = 0 ; j < N ; j++){
			if(answer[i][j] == G_CORRECT_NUMBER[j]){
				right_count++;
			}
		}
		score[i] = right_count;
		right_count = 0;
	}
	best_score = score[0];
	for(i = 0 ; i < N ; i++){
		if(best_score < score[i]){
			best_score = score[i];
			good_stu = i;
		}
	}
	printf("최고점은 %d점의 %d 번 학생\n", best_score, good_stu+1);

}
int checkAnswer(int arr[N][N], int q, int i) {
	int  j, count = 0;
	for(j = 0 ; j < N ; j++) {
		if(arr[j][q] == i){
			count++;
		}
	}
	return count;
}
int problem_52(){
	int i;

	
	printf("답안 통계\n");
	printf("===============================================\n");
	printf("문항\t1\t2\t3\t4\n");
	printf("===============================================\n");
	for(i = 0 ; i < 10 ; i++) {
		printf("%d번\t%d\t%d\t%d\t%d\n", i+1, checkAnswer(answer, i, 1),checkAnswer(answer, i, 2), checkAnswer(answer, i, 3), checkAnswer(answer, i, 4));
	}
	good_student();
	return 0;
}
