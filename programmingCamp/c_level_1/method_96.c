#include "method.h"

int problem_96() {
	int end;
	char word[100];
	char max_word[100] = " ";
	int length = 0, max_length = 0, location = 0, temp_location = 0;

	printf("���� �ٿ� ���ϴ� ������ �Է��ϼ���. �Է��� �� �Ǿ�����\n");
	printf("���ο� �� ó���� ctrl+z, �׸��� Enter�� �Է��ϼ���.\n\n");

	while(EOF != scanf("%d", &end)) {
		gets(word);
		fflush(stdin);
		length = strlen(word);
		temp_location++;

		if(length > max_length) {
			max_length = length;
			strcpy(max_word, word);
			location = temp_location;
		}
	}

	printf("���� ū ���� %s ���� %d ��ġ %d\n", max_word, max_length, location);

	return 0;
}