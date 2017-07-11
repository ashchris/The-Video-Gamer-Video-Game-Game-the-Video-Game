#pragma once
#include <iostream>
#include <string>

using namespace std;

int error_mes(string er);

int error_mes(string er) {
	string pause;
	cout << "An error has occurred:" << endl;
	cout << er << endl;
	cin >> pause;
	return 1;
}