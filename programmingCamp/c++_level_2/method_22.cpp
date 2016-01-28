//CPU 동작과정 설명 : http://egloos.zum.com/recipes/v/4982170
#include"method_22_Computer.h"
#include"method_22_Console.h"
#include"method.h"

void Effector::Problem22() {
	Computer computer;
	Console console(&computer);
	computer.Booting();
	console.Run();
}