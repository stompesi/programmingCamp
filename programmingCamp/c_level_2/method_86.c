#include "method.h"

int problem_86() {
	char password[128];
	char password2[128];
	int alpha_ok, digit_ok, i;

	printf("��й�ȣ�� ����մϴ�.\n");

	while (1) {
		alpha_ok = 0;
		digit_ok = 0;
		printf("��й�ȣ�� ����, ���� ���� �ּ��� 8�ڸ� �̾�� �մϴ�.\n");
		printf("���ο� ��й�ȣ �Է� : ");
		scanf("%s", password);
		if(strlen(password) < 8) {
			continue;
		}
		for(i = 0; i < strlen(password); i++) {
			if(isalpha(password[i])) {
				alpha_ok = 1;
			}
			else if(isdigit(password[i])) {
				digit_ok = 1;
			}
		}
		if(alpha_ok != 1 || digit_ok != 1) {
			continue;
		}
		printf("��й�ȣ �ѹ��� �Է� : ");
		scanf("%s", password2);
		if(strcmp(password, password2) != 0) {
			printf("��й�ȣ�� ��Ȯ���Է��ϼ���.\n");
			continue;
		}
		printf("��й�ȣ�� ��ϵǾ����ϴ�.\n");
		break;
	}

	return 0;
}