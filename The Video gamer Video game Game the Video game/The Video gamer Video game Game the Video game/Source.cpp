/*The Video gamer Video game Game the Video game
Developed by Asher Collier
For iD Tech Camps
Development Started on July 10, 2017*/
#include <iostream>
#include <string>
#include <random>
#include "change.h"

using namespace std;

int main()
{
	//Initialize variables
	int list[5];
	int gen = 0;
	bool lose = false;
	//It's showtime!
	cout << "Welcome to the Video gamer Video game Game the Video game" << endl;
	cout << "Developed by Asher Collier for iD Tech Camps\nVersion 0.0.1" << endl;
	cout << "-----------------------------------------------------------" << endl;
	//Start the array randomization
	for (int i = 0; i < 5; i++) {
		random_device gen;
		uniform_int_distribution<int> d6(10, 15);
		list[i] = d6(gen);
	}
	//Start the video game loop
	bool gameloop = true;
	while (gameloop) {
		int inpgam = 0;
		cout << list[0] << "," << list[1] << "," << list[2] << "," << list[3] << "," << list[4] << endl;
		cout << "Choose a number" << endl;
		cin >> inpgam;
		//Inputs for inpgam
		switch (inpgam) {
			case 1:
				tak_var(inpgam,list[0],list[1],list[2],list[3],list[4]);
				continue;
			default:
				cout << "Your input is not being recognized. Please try again." << endl;
				cout << "-----------------------------------------------------" << endl;
				continue;
		}
	}
	return 0;
}