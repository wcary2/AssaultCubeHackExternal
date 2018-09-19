//============================================================================
// Name        : BasicAssaultCubeHack.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <windows.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	int varInt = 123456;
	int *ptr2int = &varInt;
	int **ptr2ptr = &ptr2int;
	int ***ptr2ptr2 = &ptr2ptr;
	string varString = "Default String";
	char arrChar[128] = "Long char array right there ->";

	cout << "Process ID: " << GetCurrentProcessID();


	return 0;
}

