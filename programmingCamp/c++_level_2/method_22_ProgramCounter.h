#ifndef PC_H
#define PC_H
#include"method_22_Spec.h"
class ProgramCounter{
public:
	int aAddress;
	ProgramCounter();
	int GetPC();
	void SetPC(int);
};
#endif