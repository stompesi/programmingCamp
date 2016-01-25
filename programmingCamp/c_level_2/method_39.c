#include "method.h"

/*
*	하노이탑
*/

void hanoi(int n, char from, char temp, char to);

int problem_39(){
	int n;

	printf("원반의 개수 : ");
	scanf("%d", &n);

	hanoi(n, '1', '2', '3');

	return 0;
}

void hanoi(int n, char from, char temp, char to){
	if(n == 1){
		printf("%c -> %c\n", from, to);
	}
	else{
		hanoi(n-1, from, to, temp);		// 1 -> 2로의 하노이
		printf("%c -> %c\n", from, to);
		hanoi(n-1, temp, from, to);		// 2 -> 3으로의 하노이
	}
}