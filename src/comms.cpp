/*
 * comms.cpp
 *
 */
#include "comms.h"
#include "version.h"
#include <iostream>

using namespace std;
void interpret(char opcode) {//NOTE: char is used for two hex bytes
	switch (opcode) {
		case 0x05://handshake and comms version
			sendChar(0x21);
			sendInt(IPPX_COMS_INT);
			break;
		default:
			break;
	}
}

void sendChar(char c) {
	cout << c << endl;
}

void sendInt(int i) {
	cout << i << endl;
}

void readChar()
{}


