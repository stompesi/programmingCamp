#include"method.h"
int problem_64(){
	int i, operand_1, operand_2;
	char oper;
	printf("수식 입력 : ");
	scanf("%d%c%d", &operand_1, &oper, &operand_2);
	switch(oper){
	case '+':
		printf("%d %c %d = %d", operand_1, oper, operand_2, operand_1 + operand_2);
		break;
	case '-':
		printf("%d %c %d = %d", operand_1, oper, operand_2, operand_1 - operand_2);
		break;
	case '*':
		printf("%d %c %d = %d", operand_1, oper, operand_2, operand_1 * operand_2);
		break;
	case '/':
		printf("%d %c %d = %d", operand_1, oper, operand_2, operand_1 / operand_2);
		break;
	}
}