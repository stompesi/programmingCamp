#include "method.h"

struct employee {
	char name[128];
	char position[128];
	int night_time;
	int pay;
};

void input(struct employee *employees, int size);
int basic_pay(char position[]);
int allowance(char position[], int night_time);
void pay(struct employee *employees, int size);
struct employee max_pay(struct employee *employees, int size);
void output(struct employee *employees, int size);

int problem_17() {
	int size;
	struct employee *employees;

	printf("17. ȸ�� �޿� ��� ���α׷�.\n");
	
	printf("���� �� : ");
	scanf("%d", &size);
	employees = malloc(sizeof(struct employee) * size);

	input(employees, size);
	pay(employees, size);
	output(employees, size);
	
	free(employees);

	return 0;
}

void input(struct employee *employees, int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("����%d.\n", i + 1);
		printf("�̸� : ");
		scanf("%s", employees[i].name);
		printf("��å : ");
		scanf("%s", employees[i].position);
		printf("�߱ٽð� : ");
		scanf("%d", &employees[i].night_time);
	}
}

int basic_pay(char position[]) {
	if(strcmp(position, "����") == 0) {
		return 4000000;
	}
	else if(strcmp(position, "����") == 0) {
		return 3000000;
	}
	else if(strcmp(position, "�븮") == 0) {
		return 2000000;
	}
	else if(strcmp(position, "���") == 0) {
		return 1000000;
	}
}

int allowance(char position[], int night_time) {
	int pay = night_time * 20000;

	if(strcmp(position, "����") == 0) {
		pay += 4000000 * 0.12;
	}
	else if(strcmp(position, "����") == 0) {
		pay += 3000000 * 0.1;
	}
	else if(strcmp(position, "�븮") == 0) {
		pay += 2000000 * 0.08;
	}
	else if(strcmp(position, "���") == 0) {
		pay += 1000000 * 0.05;
	}
	return pay;
}

void pay(struct employee *employees, int size) {
	int i;
	for(i = 0; i < size; i++) {
		employees[i].pay = basic_pay(employees[i].position) + allowance(employees[i].position, employees[i].night_time);
	}
}

struct employee max_pay(struct employee *employees, int size) {
	int max_index = 0;
	int max_pay = employees[0].pay;
	int i;

	for(i = 1; i < size; i++) {
		if(employees[i].pay > max_pay) {
			max_pay = employees[i].pay;
			max_index = i;
		}
	}

	return employees[max_index];
}

void output(struct employee *employees, int size) {
	struct employee max_pay_employee;
	int i;
	
	printf("\n�޿� ��� ���.\n");
	for(i = 0; i < size; i++) {
		printf("�̸� : %s  ��å : %s  �߱ٽð� : %d  �����޿� : %d\n", employees[i].name, employees[i].position, employees[i].night_time, employees[i].pay);
	}

	max_pay_employee = max_pay(employees, size);

	printf("�޿��� ���� ���� ������ %s, %d�� �Դϴ�.\n", max_pay_employee.name, max_pay_employee.pay);
}

