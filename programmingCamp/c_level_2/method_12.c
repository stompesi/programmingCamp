#include "method.h"
#define SIZE 10

/*
*	10���� ���� �Է� �ް� �������� �� ���
*/

int problem_12(){
	int i, j, temp, arr[SIZE];

	for(i=0;i<SIZE; i++){
		printf("%d��° ���� �Է��ϼ��� >> ", i+1);
		scanf("%d", &arr[i]);
	}

	for(i=0; i<SIZE; i++){
		for(j=0; j<SIZE-1; j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for(i=0;i<SIZE; i++){
		printf("%4d", arr[i]);
	}
	putchar('\n');

	return 0;
}