#include"method.h"
using namespace std;
class Circle_37{		//문제 24번하고 클래스 이름 겹쳐서 Circle_37로 클래스 이름 변경했습니다.
	int aRadius;
public:
	Circle_37(int radius = 1){
		this->aRadius = radius;
	}
	void SetRadius(int radius){
		this->aRadius = radius;
	}
	int GetRadius(){
		return aRadius;
	}
};
class CircleManager{
	Circle_37 *apCircleArray;
	int aArraySize;
public:
	CircleManager(int size);
	void Change(int index, int value);
	void Show();
	~CircleManager();
};
CircleManager::CircleManager(int size){
	apCircleArray = new Circle_37[size];
	aArraySize = size;
}
void CircleManager::Change(int index, int value){
	apCircleArray[index] = value;
}
void CircleManager::Show(){
	for(int i = 0 ; i < aArraySize ; i++){
		cout<<apCircleArray[i].GetRadius()<<" ";
	}
	cout<<endl;
}
CircleManager::~CircleManager(){
	delete apCircleArray;
}
void Effector::Problem37(){
	CircleManager man(10);
	man.Change(5, 20);
	man.Show();
}