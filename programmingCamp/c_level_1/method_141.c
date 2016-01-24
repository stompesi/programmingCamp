#include "method.h"

int problem_141() {
	char id[] = "Hansung";
	char password[] = "Computer";
	char put_id[100];
	char put_password[100];

	printf("아이디 : ");
	gets(put_id);
	fflush(stdin);

	if(strcmp(put_id, id) == 0) {
		printf("비밀번호 : ");
		gets(put_password);
		fflush(stdin);

		if(strcmp(put_password, password) == 0) {
			printf("%s님 환영합니다.\n", put_id);
		} else {
			printf("비밀번호가 틀렸습니다.\n");
		}
	} else {
		printf("등록되지 않은 아이디입니다.\n");
	}

	return 0;
}