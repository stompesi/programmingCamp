#include "method.h"

int problem_141() {
	char id[] = "Hansung";
	char password[] = "Computer";
	char put_id[100];
	char put_password[100];

	printf("���̵� : ");
	gets(put_id);
	fflush(stdin);

	if(strcmp(put_id, id) == 0) {
		printf("��й�ȣ : ");
		gets(put_password);
		fflush(stdin);

		if(strcmp(put_password, password) == 0) {
			printf("%s�� ȯ���մϴ�.\n", put_id);
		} else {
			printf("��й�ȣ�� Ʋ�Ƚ��ϴ�.\n");
		}
	} else {
		printf("��ϵ��� ���� ���̵��Դϴ�.\n");
	}

	return 0;
}