#include "method.h"
#define MAX 100

struct CD{
	char singer_name[50];
	char record_name[100];
};
int size;

void menu1(struct CD cd[]) {
	int i;
	system("cls");
	printf("<<CD ���>>\n");
	for( i = 0 ; i < size ; i++) {
		printf("%s - %s\n", cd[i].singer_name, cd[i].record_name);
	}
}

void menu2(struct CD cd[]) {
	system("cls");
	printf("����� CD�� ���� �̸�? ");
	fflush(stdin);
	gets(cd[size].singer_name);

	printf("�ٹ� �̸�? ");
	fflush(stdin);
	gets(cd[size].record_name);

	printf("CD ���� ��� �Ϸ�!\n");
	
	size++;
}

void menu3(struct CD cd[]) {
	int i, idx;
	char search[10];

	system("cls");
	printf("������ CD�� ���� �̸�? ");
	fflush(stdin);
	gets(search);

	for( i = 0 ; i < size ; i++) {
		if(strcmp(search, cd[i].singer_name) == 0) {
			idx = i;
		}
	}

	printf("CD ���� ���� �Ϸ�!\n");

	for(i = idx; i < size; i++) {
		cd[i] = cd[i + 1];
	}

	size--;
}

int problem_82() {
	struct CD cd[MAX];
	int i, menu;

	do {
		printf("        CD ���� ����\n");
		printf("1.��� 2.�߰� 3.���� 4.������\n");
		printf("        �޴� ����[ ]");
		printf("\b\b");
		fflush(stdin);
		scanf("%d", &menu);

		switch (menu) {
		case 1: menu1(cd); break;
		case 2: menu2(cd); break;
		case 3: menu3(cd); break;
		case 4: return 0;
		default: printf("\n�޴��� �߸� �����Ͽ����ϴ�.\n\n");
		}

		printf("\n >> ����Ϸ��� �ƹ�Ű�� ��������"); getch();
		system("cls");
	} while(menu != 4);

	return 0;
}

	
