#ifndef ROM_H
#define ROM_H
#include<fstream>
#include<string>
#include"Spec.h"
using namespace std;
class ROM{
public:
	int aAddress[ROM_SIZE];
	ROM();
	int GetValue(int);
	void SetValue(int, int);
	int GetInstructionLenth(int);
	~ROM();
	bool SetInstructionSet(string filePath);
};
#endif