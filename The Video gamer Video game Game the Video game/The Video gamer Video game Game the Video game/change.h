#pragma once
#include <iostream>
#include <random>

using namespace std;

void tak_var(int listtak, int list0, int list1, int list2, int list3, int list4);

void tak_var(int listtak, int list0, int list1, int list2, int list3, int list4) {
	//Assign array/Init vars
	int listf[5] = {list0,list1,list2,list3,list4}
	//Start listtak ifs
	if (listtak <= 4) {
		int listr = listtak - 1;
		listf[listr] = list0 - 1;
		switch (listtak) {

		}
	}
}