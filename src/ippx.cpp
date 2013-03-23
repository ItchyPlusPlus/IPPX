/*
 * ippx.cpp
 */
#include "version.h"
#include "comms.h"
#include "listener.h"
#include <iostream>

int main(){
	using namespace std;
	cout << "IPPX" << endl;

	cout << "v."<< IPPX_VERSION_NUMBER << endl;
	cout << "comms version " << IPPX_COMMS_VERSION << endl;

	start_listener();

	interpret(0x01);


}
