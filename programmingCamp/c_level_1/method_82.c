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
	printf("<<CD 목록>>\n");
	for( i = 0 ; i < size ; i++) {
		printf("%s - %s\n", cd[i].singer_name, cd[i].record_name);
	}
}

void menu2(struct CD cd[]) {
	system("cls");
	printf("등록할 CD의 가수 이름? ");
	fflush(stdin);
	gets(cd[size].singer_name);

	printf("앨범 이름? ");
	fflush(stdin);
	gets(cd[size].record_name);

	printf("CD 정보 등록 완료!\n");
	
	size++;
}

void menu3(struct CD cd[]) {
	int i, idx;
	char search[10];

	system("cls");
	printf("삭제할 CD의 가수 이름? ");
	fflush(stdin);
	gets(search);

	for( i = 0 ; i < size ; i++) {
		if(strcmp(search, cd[i].singer_name) == 0) {
			idx = i;
		}
	}

	printf("CD 정보 삭제 완료!\n");

	for(i = idx; i < size; i++) {
		cd[i] = cd[i + 1];
	}

	size--;
}

int problem_82() {
	struct CD cd[MAX];
	int i, menu;

	do {
		printf("        CD 정보 관리\n");
		printf("1.출력 2.추가 3.삭제 4.끝내기\n");
		printf("        메뉴 선택[ ]");
		printf("\b\b");
		fflush(stdin);
		scanf("%d", &menu);

		switch (menu) {
		case 1: menu1(cd); break;
		case 2: menu2(cd); break;
		case 3: menu3(cd); break;
		case 4: return 0;
		default: printf("\n메뉴를 잘못 선택하였습니다.\n\n");
		}

		printf("\n >> 계속하려면 아무키나 누르세요"); getch();
		system("cls");
	} while(menu != 4);

	return 0;
}

	
