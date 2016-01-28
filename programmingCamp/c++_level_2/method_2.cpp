#include"method.h"

#define DOWN_MAX 10

class User {
	string aName;
	string aId;
	string aPasswd;
	string aPhone;
	string aGrade;
	int aUsePeriod;
	int aDownloadCount;
	vector<string> aDownloadList;
public :
	void InitUser(string name, string id, string passwd, string phone, string grade, int period) {
		this->aName = name;
		this->aId = id;
		this->aPasswd = passwd;
		this->aPhone = phone;
		this->aGrade = grade;
		this->aUsePeriod = period;
		this->aDownloadCount = 0;
	}
	void Print();
	void Download(string file_name);
};

void User::Print() {
	cout << "이름 : " << aName << endl;
	cout << "ID : " << aId << endl;
	cout << "비밀번호 : " << aPasswd << endl;
	cout << "전화번호 : " << aPhone << endl;
	cout << "등급 : " << aGrade << endl;
	cout << "등급 유효 기간 : " << aUsePeriod << endl;
	if (aGrade == "유료") {
		cout << "다운로드 받은 목록." << endl;
		for (int i = 0; i < aDownloadCount; i++) {
			cout << i + 1 << ". " << aDownloadList[i] << endl;
		}
		cout << "다운로드 남은 개수 : " << DOWN_MAX - aDownloadCount << endl;
	}
}

void User::Download(string file_name) {
	cout << "file_name downloading ... " << endl;
	aDownloadCount++;
	aDownloadList.push_back(file_name);
}

void Effector::Problem2() {
	User users[3];
	string name, id, passwd, phone, grade;
	int period, i;

	for(i = 0; i < 3; i++) {
		cout << "회원정보입력 " << i+1 << "." << endl;
		cout << "이름 : ";
		cin >> name;
		cout << "ID : ";
		cin >> id;
		cout << "비밀번호 : ";
		cin >> passwd;
		cout << "전화번호 : ";
		cin >> phone;
		cout << "등급(무료, 유료) : ";
		cin >> grade;
		cout << "등급 유효 기간 : ";
		cin >> period;
		users[i].InitUser(name, id, passwd, phone, grade, period);
		cout << endl;
	}

	cout << "회원정보 출력." << endl;
	for (i = 0; i < 3; i++) {
		users[i].Print();
	}
	cout << endl;
	
	users[0].Download("바람이 분다.");
	users[0].Download("이미 슬픈 사랑.");
	users[0].Download("잘가요.");
	users[0].Download("Rain Drop.");
	users[0].Download("미리매리크리스마스.");
	users[0].Download("좋은날.");
	users[0].Download("잔소리.");
	cout << endl;

	cout << "회원정보 출력." << endl;
	for (i = 0; i < 3; i++) {
		users[i].Print();
	}
}


