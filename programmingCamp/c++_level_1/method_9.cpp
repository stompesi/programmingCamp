#include "method.h"

long timediff() {// ������ �Լ�ȣ�⿡�� ���� �ɸ� �ð� return
	static time_t sec = 0; 
	time_t oldsec = sec; // time of last call
	time(&sec); //reads new time
	return (sec - oldsec); // return the difference time
}
bool checkPassword() {
	string ans;
	string password("hs-computer");

	cout << "Input the password : " ;
	cin >> ans; // ����ڰ� ��й�ȣ�� �Է�
	if(ans == password) {
		return true;
	} else {
		return false;
	}
}
void Effector::Problem9() {
	int count = 0; // �õ�Ƚ���� üũ�ϱ� ���� ����
	bool check = false, t = true;
	
	while(count < 3) {
		timediff();
		count ++;
		check = checkPassword();
		if(timediff() > 20) {
			cout << "Too long time to input password ..." << endl;
			t = false;
			break;
		} else if(check) {
			break;
		} else{ 
			cout << "Invalid password, try again !" << endl << endl;
		}
	}

	cout << "\n==============================================\n" << endl;
	
	if(check && t) {
		cout << "Welcome !" << endl << endl;
	} else{
		cout << "login failure..." << endl;
	}
}