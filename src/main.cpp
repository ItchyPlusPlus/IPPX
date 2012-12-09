#include <iostream>
#include "func.cpp"

using namespace std;


int main(){
	cout << "Hello world IPPX!" << endl;

	std::string* arg1;
	arg1 = new std::string("Hello World");
	cout << &arg1 << endl;
	cout << &ippx::func::say << endl;
	ippx::func::say(arg1);
}



