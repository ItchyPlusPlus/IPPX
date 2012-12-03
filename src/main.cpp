#include <iostream>
#include "static.cpp"

using namespace std;

int main(){
	cout << "Hello world IPPX!" << endl;

	std::string* arg1;
	arg1 = new std::string("Hello World");
	cout << &arg1 << endl;
	ippx::stat::say(arg1);
}



