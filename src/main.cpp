#include <iostream>
#include "func.h"

using namespace std;

typedef ippx::arg* (*func)(ippx::arg*);

int main(){
	cout << "Hello world IPPX!" << endl;

	string* s1;
	s1 = new string("Hello World");
	cout << &s1 << endl;

	ippx::arg* arg1 = new ippx::arg;

	arg1->s = s1;
	cout << "hello world!" << endl;
	ippx::arg* argsone[50];

	func scriptone[50];

	func f = NULL;
	f = &ippx::func::say;
	(*f)(arg1);
	cout << &f << endl;
	ippx::func::say(arg1);


	scriptone[1] = &ippx::func::say;
	argsone[1] = new ippx::arg;
	argsone[1]->s = s1;
	scriptone[2] = &ippx::func::shout;
	argsone[2] = new ippx::arg;
	argsone[2]->s = s1;
	scriptone[3] = &ippx::func::say;
	argsone[3] = new ippx::arg;
	argsone[3]->s = s1;
	scriptone[4] = &ippx::func::ask;
	argsone[4] = new ippx::arg;
	argsone[4]->s = s1;
	scriptone[5] = &ippx::func::shout;
	argsone[5] = new ippx::arg;
	argsone[5]->s = s1;

	for (int i = 1;i <= 5;i++){
		(*scriptone[i]) (arg1);
	};
	for (;;){}
}



