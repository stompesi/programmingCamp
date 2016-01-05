/**
* @file method_18.cpp
* @author �Ѽ����б� ��ǻ�Ͱ��а� ������(jinhuk1313@gmail.com)	
* @brief 2016 ���� �ڵ� ķ�� C++ Level.2 ���� 18
* @details �뷫 �ذ��� ������, �Ϻ����� ���� �� �����ϴ�. �������� 58��° �ٿ� ����� �Ͱ� �����ϴ�. ��� ���� �غôµ�, �� �𸣰ڳ׿�. ������ �̻��Ѱ���.. 
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
	a[2] = 1;	//������ ������ ���� ���� ������ �ȵǴ� ����.
				//a.[](2) ������ �Լ� ȣ�� ���� ��ȯ�Ǵ� Ÿ���� int�̱� ������ 
				//SortedArray���� ������ operator= �Լ��� ȣ������ �ʴ´�.

	cout<<"a >> ";
	a.ShowData();

	cout<<"b >> ";
	b.ShowData();

	cout<<"c >> ";
	c.ShowData();
}
