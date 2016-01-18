#include"method.h"
using namespace std;
class Date{
	string aYear;
	string aMonth;
	string aDay;
public:
	Date(string);
	Date(string, string, string);
	void SetYear(int year){
		this->aYear = to_string(year);
	}
	void SetMonth(int month){
		this->aMonth = to_string(month);
	}
	void SetDay(int day){
		this->aDay = to_string(day);
	}
	void Show(){
		cout<<aYear<<"³â"<<aMonth<<"¿ù"<<aDay<<"ÀÏ"<<endl;
	}
	string GetYear(){
		return this->aYear;
	}
	string GetMonth(){
		return this->aMonth;
	}
	string GetDay(){
		return this->aDay;
	}
};
Date::Date(string srcString){
	int position;
	position = srcString.find("/");
	aYear = srcString.substr(0, position);
	srcString = srcString.erase(0, position+1);

	position = srcString.find("/");
	aMonth = srcString.substr(0, position);
	srcString = srcString.erase(0, position + 1);

	aDay = srcString;
}
Date::Date(string year, string month, string day){
	this->aYear = year;
	this->aMonth = month;
	this->aDay = day;
}
void Effector::Problem22(){
	Date birth("2014", "3", "20");
	Date independenceDay("1944/7/16");

	cout<< birth.GetYear() <<","<<birth.GetMonth()<<","<<birth.GetDay()<<endl;
	independenceDay.Show();
	independenceDay.SetYear(1945);
	independenceDay.SetDay(15);
	independenceDay.SetMonth(8);
	independenceDay.Show();
}