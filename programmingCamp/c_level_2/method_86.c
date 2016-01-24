#include "method.h"

int problem_86() {
	char password[128];
	char password2[128];
	int alpha_ok, digit_ok, i;

	printf("비밀번호를 등록합니다.\n");

	while (1) {
		alpha_ok = 0;
		digit_ok = 0;
		printf("비밀번호는 영문, 숫자 포함 최소한 8자리 이어야 합니다.\n");
		printf("새로운 비밀번호 입력 : ");
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
		printf("비밀번호 한번더 입력 : ");
		scanf("%s", password2);
		if(strcmp(password, password2) != 0) {
			printf("비밀번호를 정확히입력하세요.\n");
			continue;
		}
		printf("비밀번호가 등록되었습니다.\n");
		break;
	}

	return 0;
}