#include "method.h"
int main() {
	int select;
	Effector effector;

	while(1) {
		system("cls");
		cout << "원하는 문제 번호 선택 (1~46) - 종료(0) : >> ";
		cin >> select;			
		fflush(stdin);
		switch(select) {
		case 0:
			return 0;
		case 1:
			effector.Problem1();
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
		case 23:
			effector.Problem23();
			break;
		case 24:
			effector.Problem24();
			break;
		case 25:
			effector.Problem25();
			break;
		case 26:
			effector.Problem26();
			break;
		case 27:
			effector.Problem27();
			break;
		case 28:
			effector.Problem28();
			break;
		case 29:
			effector.Problem29();
			break;
		case 30:
			effector.Problem30();
			break;
		case 31:
			effector.Problem31();
			break;
		case 32:
			effector.Problem32();
			break;
		case 33:
			effector.Problem33();
			break;
		case 34:
			effector.Problem34();
			break;
		case 35:
			effector.Problem35();
			break;
		case 36:
			effector.Problem36();
			break;
		case 37:
			effector.Problem37();
			break;
		case 38:
			effector.Problem38();
			break;
		case 39:
			effector.Problem39();
			break;
		case 40:
			effector.Problem40();
			break;
		case 41:
			effector.Problem41();
			break;
		case 42:
			effector.Problem42();
			break;
		case 43:
			effector.Problem43();
			break;
		case 44:
			effector.Problem44();
			break;
		case 45:
			effector.Problem45();
			break;
		case 46:
			effector.Problem46();
			break;
		default:
			cout << "존재하지않는 문제번호." << endl;
		}
		cout << "계속하시려면 아무키나 입력해주세요."<< endl;
		getch();
		fflush(stdin);
	}
}