#include "method.h"

/*
*	사칙연산이 무작위로 나오고 답이 맞을때까지 반복하거나
*	99가 입력될때까지 반복하는 프로그램
*/

int problem_75(){
	int p1, p2, result, ans, ran_op;
	char op;

	srand(time(NULL));
	
	printf("종료는 99를 입력하세요.\n");
	while(1){
		p1 = rand() % 8 + 2;	// 2~9 범위 설정
		p2 = rand() % 8 + 2;	// 2~9 범위 설정
		ran_op = rand() % 4;	// 연산 4개중 하나 랜덤

		switch(ran_op){
			case 0: op = '+'; result = p1 + p2; break;
			case 1: op = '-'; result = p1 - p2; break;
			case 2: op = '*'; result = p1 * p2; break;
			case 3: op = '/'; result = p1 / p2; break;
		}
		if(result < 0){		// 결과가 음수이면 다시 처음부터
			continue;
		}
		while(1){
			printf("%d %c %d = ? ", p1, op, p2);
			scanf("%d", &ans);
			if(ans == 99){
				break;
			}

			if(ans == result){
				printf("맞았습니다.!\n");
				break;
			}
			else{
				printf("틀렸습니다.\n");
			}
		}
		
		if(ans == 99){
				break;
		}
	}

	return 0;
}