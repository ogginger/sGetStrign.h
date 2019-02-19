//sGetString.h: Gets user to enterstring input from the console.
#pragma once
#include <iostream>
#include <string>

using namespace std;

string sGetString() {
	string sResult;
	getline( cin, sResult );
	return sResult;
}

