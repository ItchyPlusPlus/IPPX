#include <iostream>
#include "func.cpp"

using namespace std;

typedef void (*func)(string*);

int main(){
	cout << "Hello world IPPX!" << endl;

	string* arg1;
	arg1 = new string("Hello World");
	cout << &arg1 << endl;

	//int ints[100000];

	func scriptone[50];

	func f = NULL;
	f = &ippx::func::say;
	(*f)(arg1);
	cout << &f << endl;
	ippx::func::say(arg1);

	scriptone[1] = &ippx::func::say;
	scriptone[2] = &ippx::func::shout;
	scriptone[3] = &ippx::func::say;
	scriptone[4] = &ippx::func::say;
	scriptone[5] = &ippx::func::shout;

	for (int i = 1;i <= 5;i++){
		(*scriptone[i]) (arg1);
	};
}



