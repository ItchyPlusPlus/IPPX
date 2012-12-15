#include <iostream>
#include "func.h"

using namespace std;

typedef void (*func)(ippx::arg*);

int main(){
	cout << "Hello world IPPX!" << endl;

	string* s1;
	s1 = new string("Hello World");
	cout << &s1 << endl;

	ippx::arg* arg1 = new ippx::arg;

	arg1->s = s1;
	cout << "hello world!" << endl;
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



