#include "method.h"

void reverse(char *p1, char *p2) {
	int count = 0, i;
	for(i = strlen(p2)-1; i >= 0 ; i--) {
		p1[count] = p2[i];
		count++;
	}
	p1[count] = '\0';
}

int problem_140() {
	char str1[100];
	char str2[100];
	char str3[100];
	char str4[100];
	char temp[100];
	int len1, len2, len3, len4;

	printf("(1) �Է� str1: ");
	gets(str1);
	fflush(stdin);
	printf("    �Է� str2: ");
	gets(str2);
	fflush(stdin);

	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	printf("(2) ��ȯ str1=%s str2=%s\n", str1, str2);

	len1 = strlen(str1);
	len2 = strlen(str2);
	printf("len1=%d len2=%d\n", len1, len2);

	strcpy(str3, str2);
	printf("(3) ���� str3=%s\n", str3);

	strcat(str3, " ");
	strcat(str3, str1);
	strcat(str3, " Computer Engineering");
	printf("(4) �̾� ���̱� str3=%s\n", str3);

	len3 = strlen(str3);
	printf("len3=%d\n", len3);
	
	printf("(5) ������ str4=");
	reverse(str4, str3);
	
	printf("%s\n", str4);

	len4 = strlen(str4);
	printf("len4=%d\n", len4);

	return 0;
}

