#ifndef IR_H
#define IR_H
#include"method_22_Spec.h"
class InstructionRegister{
public:
	int aBuffer[IR_BUF_SIZE];
	void SetInstruction(int, int);
	void CleanBuffer();
	int* GetBufferValue();
	InstructionRegister();
};
#endif