#include "method.h"
#include<ctime>
class System{
	string password;
public:
	System();
	void Run();
	long TimeDiff();
	bool CheckPassword();
	bool InputPW();
	void SetPW(string pw);
};
void System::SetPW(string pw){
	this->password = pw;
}
System::System(){
	this->password  = "hs-computer";
}
void System::Run(){
	string menu;
	string input_pw;
	do{
		printf("I : input password\n");
		printf("C : change password\n");
		printf("E : exit\n");
		getline(cin, menu, '\n');
		switch(menu[0]){
		case 'I':
			if(InputPW()){
				cout << "Welcome !" << endl << endl;

			} else {
				cout << "login failure..." << endl;
			}
			break;
		case 'C':
			cout<<"���� ��й�ȣ �Է�"<<endl;
			if(InputPW()){
				cout<<"������ ��й�ȣ �Է�"<<endl;
				getline(cin, input_pw, '\n');
				SetPW(input_pw);
			} else {
				cout << "login failure..." << endl;
			}
			break;

		case 'E':
			break;
		}
	}while(menu[0] != 'E');
}

bool System::InputPW(){
	int count = 0;
	bool check = false, t = true;
	
	while(count < 3) {
		TimeDiff();
		count ++;
		check = CheckPassword();
		if(TimeDiff() > 20) {
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
	
	if(check && t){
		return true;		
	} else{
		return false;
	}

}
long System::TimeDiff() {// ������ �Լ�ȣ�⿡�� ���� �ɸ� �ð� return
	static time_t sec = 0; 
	time_t oldsec = sec; // time of last call
	time(&sec); //reads new time
	return (sec - oldsec); // return the difference time
}
bool System::CheckPassword(){
	string ans;
	cout << "Input the password : " ;
	getline(cin,ans,'\n'); // ����ڰ� ��й�ȣ�� �Է�
	if(ans == password) {
		return true;
	} else{
		return false;
	}
}
void Effector::Problem10() {
	System sys;
	sys.Run();
}
