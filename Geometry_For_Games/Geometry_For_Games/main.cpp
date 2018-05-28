﻿/*

Files to be created : main.cpp, geometry.h, geomtery.cpp, test.h, test.cpp 2. 

Write your test cases such that code keeps track of how many test scenarios were run (by keeping the count of it) and OUTPUT it. 

*/


/*
name of function: main
@author: Henry Oliver
@parameter: Main
@return: 0
*/

#include <iostream>
#include <string>
#include <windows.h>
#include "geometry.h"
#include "test.h"

TVector3 A;
TVector3 B;
TVector3 C;
TVector3 D;

float af;
float bf;
float cf;
float df;


using namespace std;
/*
name of function: GotoXY
@author: Media Design School
@parameter: Changes Console Cursor Position
@return: null
*/
void GotoXY(int _iX, int _iY) {
	COORD point;
	point.X = _iX;
	point.Y = _iY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), point);
}
/*
name of function: Invalid
@author: Henry Oliver
@parameter: Displays a box that informs user of an invalid input
@return: null
*/
void Invalid() {
	system("COLOR 40");
	system("cls");
	GotoXY(30, 7);
	cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
	GotoXY(30, 8);
	cout << char(186) << " PLEASE ENTER A VALID OPTION " << char(186) << endl;
	GotoXY(30, 9);
	cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
	Beep(1200, 500);
	Sleep(2000);
	system("COLOR 0F");
}
/*
name of function: main
@author: Henry Oliver
@parameter: Main Routine
@return: 0
*/
int main() {

	//You don't have two vectors in main, so you cannot call it. Otherwise it is just bool result = Equals(vec1, vec2);. No magic

	HWND console = GetConsoleWindow();
	RECT w;
	GetWindowRect(console, &w);
	MoveWindow(console, w.left, w.top, 800, 400, TRUE); //Resize console window



	int iT;

	int choice = -1;
	while (choice != 99) {
		system("cls");
		cout << "Main Menu" << endl;
		cout << "1. Vector Equals Vector" << endl;
		cout << "2. Add Two Vectors" << endl;
		cout << "3. Subtract Two Vectors" << endl;
		cout << "4. Scale A Vector" << endl;
		cout << "99. Exit" << endl;
		cout << "Please Choose an Option:";
		cin >> choice;

		if (choice == 1) { //Equals
			bool result = Equals(A, B);
			if (result == true) {
				cout << "The Two Vectors Are Equal!" << endl;
			}
			else {
				cout << "The Two Vectors Are Not Equal!" << endl;
			}
			cout << "Press Enter To Return...";
			cin >> iT;
		}

		else if (choice == 2) { //Add
			Add(A, B, C);
			cout << "Press Enter To Return...";
			cin >> iT;
		}

		else if (choice == 3) { //Subtract
			Subtract(A, B, C);
			cout << "Press Enter To Return...";
			cin >> iT;
		}

		else if (choice == 4) { //Subtract
			ScaleVector(A, af, B);
			cout << "Press Enter To Return...";
			cin >> iT;
		}

		else if (choice == 99) {
			break;
		}

		else {
			Invalid();
			choice = -1;
		}
	}

	return 0;
}