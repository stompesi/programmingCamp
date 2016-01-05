/**
* @file method_18.cpp
* @author 한성대학교 컴퓨터공학과 강진혁(jinhuk1313@gmail.com)	
* @brief 2016 동계 코딩 캠프 C++ Level.2 문제 18
* @details 대략 해결은 했지만, 완벽하진 않은 것 같습니다. 문제점은 58번째 줄에 기술한 것과 같습니다. 고민 많이 해봤는데, 잘 모르겠네요. 문제가 이상한건지.. 
*/
#include"method.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class SortedArray{
	vector<int> aSortedArray;
public:
	void operator <<(int x);
	void operator=(int x);
	int& operator[](int index);
	SortedArray operator+(SortedArray rightHandSideArray);
	void ShowData();
	void ArraySorting();
};
void SortedArray::ArraySorting(){
	sort(this->aSortedArray.begin(), this->aSortedArray.end());
}
SortedArray SortedArray::operator+(SortedArray rightHandSideArray){
	SortedArray dst_array;
	dst_array.aSortedArray.insert(dst_array.aSortedArray.end(), this->aSortedArray.begin(), this->aSortedArray.end());
	dst_array.aSortedArray.insert(dst_array.aSortedArray.end(), rightHandSideArray.aSortedArray.begin(), rightHandSideArray.aSortedArray.end());
	dst_array.ArraySorting();
	return dst_array;
}
int& SortedArray::operator[](int index){
	return aSortedArray[index];
}
void SortedArray::operator=(int x){
	ArraySorting();
}
void SortedArray::ShowData(){
	for(int i = 0 ; i < this->aSortedArray.size(); i++){
		cout<<this->aSortedArray[i]<<" ";
	}
	cout<<endl;
}
void SortedArray::operator<<(int x){
	this->aSortedArray.push_back(x);
	this->ArraySorting();
}
void Effector::Problem18(){
	SortedArray a,b,c;
	a<<3;
	a<<5;
	a<<2;
	b<<4;

	c = a+b;
	a[2] = 1;	//대입은 되지만 대입 이후 정렬이 안되는 문제.
				//a.[](2) 연산자 함수 호출 이후 반환되는 타입이 int이기 때문에 
				//SortedArray에서 정의한 operator= 함수를 호출하지 않는다.

	cout<<"a >> ";
	a.ShowData();

	cout<<"b >> ";
	b.ShowData();

	cout<<"c >> ";
	c.ShowData();
}
