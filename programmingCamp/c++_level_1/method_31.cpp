#include"method.h"
using namespace std;
#define PI 3.141592
class Shape{
protected:
	string aName;
	int aWidth;
	int aHeight;
public:
	Shape(string name = "", int width = 0, int height = 0){
		aName = name;
		aWidth = width;
		aHeight = height;
	}
	virtual double GetArea(){
		return 0;
	}
	string GetName(){
		return aName;
	}
};
class Oval :public Shape{
public:
	Oval(string, int, int);
	double GetArea(){
		return aWidth * aHeight * PI;
	}
};
class Rect : public Shape{
public:
	Rect(string, int, int);
	double GetArea(){
		return aWidth * aHeight;
	}
};
class Triangular : public Shape{
public:
	Triangular(string, int, int);
	double GetArea(){
		return aWidth * aHeight * 0.5;
	}
};
Triangular::Triangular(string name, int width, int height):Shape(name, width, height){

}
Rect::Rect(string name, int width, int height):Shape(name, width, height){

}
Oval::Oval(string name, int width, int height):Shape(name, width, height){

}
void Effector::Problem31(){
	Shape *p[3];
	p[0] = new Oval("치즈케익", 10, 30);
	p[1] = new Rect("피자상자", 30, 40);
	p[2] = new Triangular("토스트", 10, 20);
	for(int i = 0 ; i < 3 ; i++){
		cout<<p[i]->GetName() << " 넓이는 "<<p[i]->GetArea() <<endl;
	}
	for(int i = 0 ; i < 3 ; i++){
		delete p[i];
	}
}