#include "method.h"

int main() {
	int select;

	while(1) {
		system("cls");
		printf("원하는 문제 번호 선택 (1~143) - 종료(0) : >> ");
		scanf("%d", &select);			
		fflush(stdin);
		switch(select) {
		case 0:
			return 0;
		case 1:
			problem_1();
			break;
		case 2:
			problem_2();
			break;
		case 3:
			problem_3();
			break;
		case 4:
			problem_4();
			break;
		case 5:
			problem_5();
			break;
		case 6:
			problem_6();
			break;
		case 7:
			problem_7();
			break;
		case 8:
			problem_8();
			break;
		case 9:
			problem_9();
			break;
		case 10:
			problem_10();
			break;
		case 11:
			problem_11();
			break;
		case 12:
			problem_12();
			break;
		case 13:
			problem_13();
			break;
		case 14:
			problem_14();
			break;
		case 15:
			problem_15();
			break;
		case 16:
			problem_16();
			break;
		case 17:
			problem_17();
			break;
		case 18:
			problem_18();
			break;
		case 19:
			problem_19();
			break;
		case 20:
			problem_20();
			break;
		case 21:
			problem_21();
			break;
		case 22:
			problem_22();
			break;
		case 23:
			problem_23();
			break;
		case 24:
			problem_24();
			break;
		case 25:
			problem_25();
			break;
		case 26:
			problem_26();
			break;
		//case 27:
		//	problem_27();
		//	break;
		case 28:
			problem_28();
			break;
		case 29:
			problem_29();
			break;
		case 30:
			problem_30();
			break;
		case 31:
			problem_31();
			break;
		case 32:
			problem_32();
			break;
		case 33:
			problem_33();
			break;
		case 34:
			problem_34();
			break;
		case 35:
			problem_35();
			break;
		//case 36:
		//	problem_36();
		//	break;
		case 37:
			problem_37();
			break;
		case 38:
			problem_38();
			break;
		case 39:
			problem_39();
			break;
		case 40:
			problem_40();
			break;
		case 41:
			problem_41();
			break;
		//case 42:
		//	problem_42();
		//	break;
		case 43:
			problem_43();
			break;
		case 44:
			problem_44();
			break;
		//case 45:
		//	problem_45();
		//	break;
		case 46:
			problem_46();
			break;
		case 47:
			problem_47();
			break;
		case 48:
			problem_48();
			break;
		case 49:
			problem_49();
			break;
		case 50:
			problem_50();
			break;
		case 51:
			problem_51();
			break;
		case 52:
			problem_52();
			break;
		case 53:
			problem_53();
			break;
		//case 54:
		//	problem_54();
		//	break;
		case 55:
			problem_55();
			break;
		case 56:
			problem_56();
			break;
		/*case 57:
			problem_57();
			break;*/
		case 58:
			problem_58();
			break;
		case 59:
			problem_59();
			break;
		case 60:
			problem_60();
			break;
		case 61:
			problem_61();
			break;
		case 62:
			problem_62();
			break;
		case 63:
			problem_63();
			break;
		case 64:
			problem_64();
			break;
		case 65:
			problem_65();
			break;
		case 66:
			problem_66();
			break;
		case 67:
			problem_67();
			break;
		case 68:
			problem_68();
			break;
		case 69:
			problem_69();
			break;
		case 70:
			problem_70();
			break;
		case 71:
			problem_71();
			break;
		case 72:
			problem_72();
			break;
		case 73:
			problem_73();
			break;
		case 74:
			problem_74();
			break;
		case 75:
			problem_75();
			break;
		case 76:
			problem_76();
			break;
		case 77:
			problem_77();
			break;
		case 78:
			problem_78();
			break;
		case 79:
			problem_79();
			break;
		case 80:
			problem_80();
			break;
		case 81:
			problem_81();
			break;
		case 82:
			problem_82();
			break;
		case 83:
			problem_83();
			break;
		case 84:
			problem_84();
			break;
		case 85:
			problem_85();
			break;
		case 86:
			problem_86();
			break;
		case 87:
			problem_87();
			break;
		case 88:
			problem_88();
			break;
		case 89:
			problem_89();
			break;
		//case 90:
		//	problem_90();
		//	break;
		case 91:
			problem_91();
			break;
		case 92:
			problem_92();
			break;
		//case 93:
		//	problem_93();
		//	break;
		case 94:
			problem_94();
			break;
		case 95:
			problem_95();
			break;
		default:
			printf("존재하지않는 문제번호.\n");
		}
		printf("계속하시려면 아무키나 입력해주세요.");
		getch();
		fflush(stdin);
	}
}