#include "method.h"

#define MAX_STR 128
class String {
	char* pStr;
public :
	String(char* s);
	void show();
	void operator = (String& rStr);
	String operator + (String& rStr);
	~String();
};
void String::operator = (String& rStr) {
	strcpy(this->pStr,rStr.pStr);
}
String String::operator + (String& rStr) {
	strcat(this->pStr, rStr.pStr);
	return this->pStr;
}
String::String(char* s) {
	pStr = new char[MAX_STR];
	strcpy(pStr,s);		
}
String::~String() {
	delete pStr;
}
void String::show() {
	cout << pStr << endl;
}

// 문제 - 실행함수
void Effector::Problem3() {
	String s1("hello"), s2("how are you?"), s3("see you later");

	s1.show();
	
	s1 = s2;	
	s1.show();
	
	s1 = s2 + s3;	
	s1.show();
}
		