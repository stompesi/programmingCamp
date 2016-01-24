#include "method.h"

/*
*	동적으로 자료를 만들어 연결리스트를 구성
*	각 학생의 점수의 합을 구하여 내용과 합을 출력
*/

typedef struct node{
	int index;
	char name[10];
	double mid;
	double final;
	struct node* next;
}NODE;

typedef struct list{
	int count;
	NODE* head;
}LIST;

void init(LIST*);
void print_list(LIST* lptr);
void insert(LIST* lptr, NODE value, int position);

int problem_48(){
	FILE* f;
	LIST *head;
	NODE *target, tmp;
	char tmp_name[10];
	double tmp_mid, tmp_final;
	int n;

	f = fopen("student.txt", "r");
	head = (LIST*)malloc(sizeof(LIST));
	init(head);

	while(!feof(f)){
		fscanf(f, "%d %s %lf %lf", &n, tmp_name, &tmp_mid, &tmp_final);
		
		tmp.index = n;
		strcpy(tmp.name, tmp_name);
		tmp.mid = tmp_mid;
		tmp.final = tmp_final;

		insert(head, tmp, n);
	}

	print_list(head);

	free(head);
	fclose(f);
	return 0;
}

void init(LIST *lptr){
	lptr->count = 0;
	lptr->head = NULL;
}
void insert(LIST* lptr, NODE value, int position){
	NODE *new_nptr;
	if(position < 1 || position > (lptr->count)+1){
		printf("위치가 범위를 벗어났습니다.\n");
		return;
	}
	
	new_nptr = (NODE*)malloc(sizeof(NODE));
	new_nptr->index = value.index;
	strcpy(new_nptr->name, value.name);
	new_nptr->mid = value.mid;
	new_nptr->final = value.final;

	if(position == 1){
		new_nptr->next = lptr->head;
		lptr->head = new_nptr;
	}
	else if(position - 1 == lptr->count){
		int i;
		NODE* tmp;
		tmp = lptr->head;
		
		for(i = 1; i < position-1; i++){
			tmp = tmp->next;
		}

		tmp->next = new_nptr;
		new_nptr->next = NULL;
	}
	else {
		int i;
		NODE* tmp;
		tmp = lptr->head;
		
		for(i = 1; i < position; i++){
			tmp = tmp->next;
		}

		new_nptr->next = tmp->next;
		tmp->next = new_nptr;
	}
	lptr->count++;
}
void print_list(LIST* lptr){
	NODE* tmp = lptr->head;
	while(tmp != NULL){
		printf("  %d	%s	%5.1lf	%5.1lf	%5.1lf\n", tmp->index, tmp->name,
			tmp->mid, tmp->final, tmp->mid + tmp->final);
		tmp = tmp->next;
	}
}