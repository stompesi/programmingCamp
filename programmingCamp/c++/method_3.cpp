#include<iostream>
#include<string.h>

using namespace std;
#define MAX_STR 128
class String{
	char* str;
public :
	String(char* s);
	void show();
	void operator =(String& str);
	String operator + (String& str);
	~String();
};
void String::operator=(String& str){
	strcpy(this->str,str.str);
}
String String::operator+(String& str){
	strcat(this->str, str.str);
	return this->str;
}

String::String(char* s){
	str = new char[MAX_STR];
	strcpy(str,s);		
}
String::~String(){
	delete str;
}
void String::show(){
	cout<<str<<endl;
}
void problem_3(){
	String s1("hello"), s2("how are you?");
	String s3("see you later");
	s1.show();
	s1 = s2;	s1.show();
	s1 = s2 + s3;	s1.show();
}
