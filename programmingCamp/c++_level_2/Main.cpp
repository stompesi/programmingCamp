#include "method.h"
int main(int argc, char* argv[]) {
	int select;
	Effector effector;

	while(1) {
		system("cls");
		cout << "���ϴ� ���� ��ȣ ���� (1~46) - ����(0) : >> ";
		cin >> select;			
		cin.ignore(1, '\n');
		switch(select) {
		case 0:
			return 0;
		case 1:
			effector.Problem1(argc, argv);
			break;
		case 2:
			effector.Problem2();
			break;
		case 3:
			effector.Problem3();
			break;
		case 4:
			effector.Problem4();
			break;
		case 5:
			effector.Problem5();
			break;
		case 6:
			effector.Problem6();
			break;
		case 7:
			effector.Problem7();
			break;
		case 8:
			effector.Problem8();
			break;
		case 9:
			effector.Problem9();
			break;
		case 10:
			effector.Problem10();
			break;
		case 11:
			effector.Problem11();
			break;
		case 12:
			effector.Problem12();
			break;
		case 13:
			effector.Problem13();
			break;
		case 14:
			effector.Problem14();
			break;
		case 15:
			effector.Problem15();
			break;
		case 16:
			effector.Problem16();
			break;
		case 17:
			effector.Problem17();
			break;
		case 18:
			effector.Problem18();
			break;
		case 19:
			effector.Problem19();
			break;
		case 20:
			effector.Problem20();
			break;
		case 21:
			effector.Problem21();
			break;
		case 22:
			effector.Problem22();
			break;
		default:
			cout << "���������ʴ� ������ȣ." << endl;
		}
		cout << "����Ͻ÷��� �ƹ�Ű�� �Է����ּ���."<< endl;
		getch();
		fflush(stdin);
	}
}