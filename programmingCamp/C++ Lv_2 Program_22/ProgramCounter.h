#ifndef PC_H
#define PC_H
#include"Spec.h"
class ProgramCounter{
public:
	int aAddress;
	ProgramCounter();
	int GetPC();
	void SetPC(int);
};
#endif