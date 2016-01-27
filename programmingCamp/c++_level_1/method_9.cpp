#include "method.h"

long timediff() {// 이전의 함수호출에서 부터 걸린 시간 return
	static time_t sec = 0; 
	time_t oldsec = sec; // time of last call
	time(&sec); //reads new time
	return (sec - oldsec); // return the difference time
}
bool checkPassword() {
	string ans;
	string password("hs-computer");

	cout << "Input the password : " ;
	cin >> ans; // 사용자가 비밀번호를 입력
	if(ans == password) {
		return true;
	} else {
		return false;
	}
}
void Effector::Problem9() {
	int count = 0; // 시도횟수를 체크하기 위한 변수
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