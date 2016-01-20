//CPU 동작과정 설명 : http://egloos.zum.com/recipes/v/4982170
#include"Computer.h"
#include"Console.h"
void main(){
	Computer computer;
	Console console(&computer);
	computer.Booting();
	console.Run();

}