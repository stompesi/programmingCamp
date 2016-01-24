#include "method.h"

int problem_133() {
	int front, post, answer;
	int result = 0, temp = 0;
	char op[2] = { '+', '-' };
	int op_select;

	srand(time(NULL));

	while(1) {
		front = rand() % 9 + 1;
		post = rand() % 9 + 1;
		op_select = rand() % 2;

		if(op_select == 0) {
			printf("%d %c %d = ? ", front, op[op_select], post);
			scanf("%d", &answer);
			fflush(stdin);

			result = front + post;
			
			if(result == answer) {
				printf("맞았습니다.!\n"); 
			} else if(answer == 99) {
				break;
			} else if(result != answer) {
				printf("틀렸습니다...\n");
			}
		} else if(op_select == 1) {
			if(front < post) {
				temp = front;
				front = post;
				post = temp;
			}

			printf("%d %c %d = ? ", front, op[op_select], post);
			scanf("%d", &answer);
			fflush(stdin);

			result = front - post;
			
			if(result == answer) {
				printf("맞았습니다.!\n");
			} else if(answer == 99) {
				break;
			} else if(result != answer) {
				printf("틀렸습니다...\n");
			}
		}
	}

	return 0;
}