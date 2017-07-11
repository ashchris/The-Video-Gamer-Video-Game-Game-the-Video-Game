/*The Video gamer Video game Game the Video game
Developed by Asher Collier
For iD Tech Camps
Development Started on July 10, 2017\
Proto Ver 0.0.2
Development Ended on July 14. 2017
Assistance by Pixel*/
#include <iostream>
#include <string>
#include <random>
#include "change.h"
#include "error.h"
#define dist uniform_int_distribution

using namespace std;

int main()
{
	//Initialize variables
	int list[5];
	int winlist[5];
	int gen = 0;
	bool lose = false;

	//It's showtime!
	cout << "Welcome to the Video gamer Video game Game the Video game" << endl;
	cout << "Developed by Asher Collier for iD Tech Camps\nPrototype v. 0.0.2_01" << endl;
	cout << "-----------------------------------------------------------" << endl;

	//Start the array randomization
	for (int i = 0; i < 5; i++) {
		random_device gen;
		dist<int> rang(10, 15);
		list[i] = rang(gen);
	}

	for (int i = 0; i < 5; i++) {
		random_device gen;
		dist<int> wrng(1, 7);
		winlist[i] = wrng(gen);
	}

	//Start the video game loop
	bool gameloop = true;

	while (gameloop) {
		int inpgam = 0;
		if (list == winlist) {
			lose = false;
			gameloop = false;
		}

		cout << "Match: " << winlist[0] << "," << winlist[1] << "," << winlist[2] << "," << winlist[3] << "," << winlist[4] << endl;
		cout << list[0] << "," << list[1] << "," << list[2] << "," << list[3] << "," << list[4] << endl;
		cout << "^  ^  ^  ^  ^" << endl;
		cout << "1  2  3  4  5" << endl;

		//Check for 0s on any num on array/
		if (list[0] == 0 || list[1] == 0 || list[2] == 0 || list[3] == 0 || list[4] == 0) {
			lose = true;
			gameloop = false;
		}

		cout << "Choose a number" << endl;
		cin >> inpgam;
		
		//Inputs for inpgam
		if (inpgam == 1) {
			list[5] = tak_var(inpgam, list[0], list[1], list[2], list[3], list[4]);
			continue;
		}
		
		else if (inpgam == 2) {
			list[5] = tak_var(inpgam, list[0], list[1], list[2], list[3], list[4]);
			continue;
		}
		
		else if (inpgam == 3) {
			list[5] = tak_var(inpgam, list[0], list[1], list[2], list[3], list[4]);
			continue;
		}

		else if (inpgam == 4) {
			list[5] = tak_var(inpgam, list[0], list[1], list[2], list[3], list[4]);
			continue;
		}

		else if (inpgam == 5) {
			list[5] = tak_var(inpgam, list[0], list[1], list[2], list[3], list[4]);
			continue;
		}

		else {
			cout << "Input not defined. Please try again." << endl;
		}
	}
	//Check for lose
	if (lose == true) {
		string ps;
		cout << "GAME OVER" << endl;
		cout << "Press enter to continue. . .";
		cin >> ps;
	}

	else if (lose == false) {
		string psl;
		cout << "Congratulations!\nYou have completed the puzzle!\nYou sure are a genius!" << endl;
		cout << "Created by Asher Collier for iD Tech Camps" << endl;
		cout << "Assistance by Pixel" << endl;
		cout << "Created in Microsoft Visual Studio 2015 on Windows 10" << endl;
		cout << "Source Code copyright (C) 2017 iD Tech Camps" << endl;
		cout << "Microsoft Visual Studio and Windows 10 Copyright (C) 1985-2017 Microsoft Corporation" << endl;
		cout << "All rights reserved to all of the products' respective owners." << endl;
		cout << "Press enter to continue. . .";
		cin >> psl;
	}
	
	else {
		string err_lb = "boolean lose is neither 0 nor 1";
	}

	return 0;
}