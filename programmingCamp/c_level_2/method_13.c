#include"method.h"
#include<stdio.h>

#define MAT_COL 3
#define MAT_ROW 2

void matrix_sum(int (*mat_a)[MAT_COL], int (*mat_b)[MAT_COL], int (*mat_dst)[MAT_COL]){
	int i, j;
	for(i = 0 ; i < MAT_ROW ; i++){
		for(j = 0 ; j < MAT_COL ; j++){
			mat_dst[i][j] = mat_a[i][j] + mat_b[i][j];
		}
	}
}
void show_matrix_row(int (*mat)[MAT_COL], int row){
	int i;
	printf("[");
	for(i = 0 ; i < MAT_COL ; i++){
		printf("%d ", mat[row][i]);
	}
	printf("]   ");
}
void show_matrix(int (*mat_a)[MAT_COL], int (*mat_b)[MAT_COL], int (*mat_dst)[MAT_COL]){
	int i, j;
	printf("��� a +   ��� b\t=��� c\n");
	for(i = 0 ; i < MAT_ROW ; i++){
		show_matrix_row(mat_a, i);
		show_matrix_row(mat_b, i);
		show_matrix_row(mat_dst, i);
		printf("\n");
	}
}
void problem_13(){
	int matrix_a[MAT_ROW][MAT_COL] = {{1,2, 3}, {4, 5, 6}}, matrix_b[MAT_ROW][MAT_COL] = {{10, 20, 30}, {40, 50, 60}};
	int matrix_result[MAT_ROW][MAT_COL] = {0,};

	matrix_sum(matrix_a, matrix_b, matrix_result);
	show_matrix(matrix_a, matrix_b, matrix_result);

}
/*2���� �迭 ����
��ȯ�Ǵ� mat_dst�� �ޱ� ���ؼ� int (*mat)[MAT_COL] ���·� ����
int (*matrix_sum(int (*mat_a)[MAT_COL], int (*mat_b)[MAT_COL]))[MAT_COL]{
	int mat_dst[MAT_ROW][MAT_COL];
	int i, j;
	for(i = 0 ; i < MAT_ROW ; i++){
		for(j = 0 ; j < MAT_COL ; j++){
			mat_dst[i][j] = mat_a[i][j] + mat_b[i][j];
		}
	}
	return mat_dst;
}*/