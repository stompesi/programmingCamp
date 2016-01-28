#ifndef RAM_H
#define RAM_H
#include<string>
#include<fstream>
using namespace std;
#include"method_22_Spec.h"
class RAM{
public:
	int aAddress[RAM_SIZE];

	RAM();
	bool LoadProgram(string FilePath);
	int GetValue(int);
	void SetValue(int, int);
	~RAM();
};
#endif