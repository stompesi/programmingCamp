#include"method.h"
using namespace std;
//class MyFunc{
//public:
//	double Max(double x, double y){
//		return x>y? x : y;
//	}
//	char Max(char x, char y){
//		return x>y?x:y;
//	}
//	int Max(int x, int y){
//		return x>y?x:y;
//	}
//};
class MyFunc {
public:
	template <class T>
	T Max(T x, T y) {
		return x > y ? x : y;
	}
};
void Effector::Problem7() {
	float x, y;
	char c1, c2;
	int a = 30, b = 50;
	MyFunc util;

	cout << "input 2 floating-point numbers" << endl;
	cin >> x; cin >> y;
	cout << "The greater number is " << util.Max(x, y) << endl;
	cout << "---------------------------------------------------------\n";

	cout << "input 2 chatracters" << endl;
	cin >> c1;
	cin >> c2;
	cout << "The greater character is " << util.Max(c1, c2) << endl;
	cout << "----------------------------------------------------------\n";

	cout << "Testing with int arguments." << endl;
	
	cout << "a = " << a << " b = " << b << endl;
	cout << "The greater int is " << util.Max(a, b) << endl;
}
