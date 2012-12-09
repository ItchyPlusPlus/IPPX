#include <iostream>
#include "func.cpp"

using namespace std;

typedef void (*func)(string*);

int main(){
	cout << "Hello world IPPX!" << endl;

	string* arg1;
	arg1 = new string("Hello World");
	cout << &arg1 << endl;

	func f = NULL;
	f = &ippx::func::say;
	(*f)(arg1);
	cout << &f << endl;
	ippx::func::say(arg1);
}



