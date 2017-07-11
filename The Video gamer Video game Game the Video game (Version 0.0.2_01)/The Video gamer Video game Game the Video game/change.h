/*change.h
Includes: error.h
Created on July 10, 2017
by Asher Collier*/
#pragma once
#include <iostream>
#include <random>
#include <string>
#include "error.h"

using namespace std;

int tak_var(int listtak, int list0, int list1, int list2, int list3, int list4);

int tak_var(int listtak, int list0, int list1, int list2, int list3, int list4) {
	//Assign array/Init vars
	int listf[5] = { list0,list1,list2,list3,list4 };

	//Start listtak ifs
	//int listr = listtak - 1;	unused

	if (listtak == 1) {
		list4 -= 1; 
		list0 -= 2; 
		listf[4] = list4;
		listf[0] = list0;
	
	}

	else if (listtak == 2) {
		list3 -= 1;
		list1 -= 2;
		listf[3] = list3;
		listf[1] = list1;
	}

	else if (listtak == 3) {
		//Just to spice things up
		list0 -= 1;
		list4 -= 1;
		listf[0] = list0;
		listf[4] = list4;
		list2 -= 2;
		listf[2] = list2;
	}

	else if (listtak == 4) {
		list3 -= 1;
		list1 -= 2;
		listf[3] = list3; //subtract 15-1 = 14
		listf[1] = list1;
	}

	else if (listtak == 5) {
		list4 -= 1;
		list0 -= 2;
		listf[4] = list4;
		listf[0] = list0;
	}

	else {
		//Report an error
		string er_str = "listtak is out of range in switch in change.h";
			error_mes(er_str);
	}

	return listf[3];
}