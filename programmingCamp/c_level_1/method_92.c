#include "method.h"

int problem_92() {
	char word[100];
	int count = 0;

	printf("ù ��° ������ ã�� ���α׷�\n");

	printf("�ܾ �Է��ϼ��� : ");
	gets(word);

	while(1) {
		if(word[count] == ' ') {
			count++;
			break;
		} else {
			count++;
		}
	}
	
	printf("������ ��� : %s\n", &word[count]);

	return 0;
}