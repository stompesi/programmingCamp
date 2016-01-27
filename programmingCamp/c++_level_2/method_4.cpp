#include"method.h"
using namespace std;

class CPerson {
public:
	string aName;
	string aPhoneNumber;
	string aEmail;
	CPerson();
	CPerson(string, string, string);
	friend ostream& operator<<(ostream &output, CPerson &person);
};
ostream& operator<<(ostream &output, CPerson &person) {
	output << person.aPhoneNumber;
	return output;
}
CPerson::CPerson() {
}
CPerson::CPerson(string name, string phoneNumber, string email) {
	this->aName = name;
	this->aPhoneNumber = phoneNumber;
	this->aEmail = email;
}
void Effector::Problem4() {
	string name = "";
	map<string, CPerson> M;
	map<string, CPerson>::iterator findPerson;
	M["James"] = CPerson("James Dean", "010-1234-1234", "jd@gmail.com");
	M["Mike"] = CPerson("Mike Test", "011-2234-3518", "mk@naver.com");
	M["Alice"] = CPerson("Alice Blice", "017-5351-2346", "abc@lycos.co.kr");
	M["jhKang"] = CPerson("jinhyeok Kang", "010-5678-1234", "jhKang1313@gmail.com");
	M["sungmin"] = CPerson("sungmin Yoon", "010-2323-1415", "sungmin77@gmail.com");
	
	cout << "°Ë»ö -> ";
	cin >> name;
	findPerson = M.find(name);
	cout << (*findPerson).first << "\t: " << (*findPerson).second << endl << endl;
	for(map<string, CPerson>::iterator iter = M.begin() ; iter != M.end() ; iter++) {
		cout << (*iter).first << "\t: " << (*iter).second << endl;
	}
}