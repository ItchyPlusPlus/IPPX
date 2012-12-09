#include <iostream>
#include "static.cpp"

using namespace std;

/**
 * this is a test
 */
int main(){
	cout << "Hello world IPPX!" << endl;

	std::string* arg1;
	arg1 = new std::string("Hello World");
	cout << &arg1 << endl;
	cout << &ippx::stat::say << endl;
	cout << &ippx::stat::shout << endl;
	ippx::stat::say(arg1);
}



