#ifndef CONTROL_UNIT_H
#define CONTROL_UNIT_H
class CPU;
class ControlUnit{
	CPU *apCPU;
public:
	ControlUnit(CPU *pCPU);
	void InterpretInstruction();
};
#endif