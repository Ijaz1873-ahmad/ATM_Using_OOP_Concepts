/*
 * MainManu.cpp
 *
 *  Created on: Dec 26, 2020
 *      Author: ijaz
 */


#include "MainManu.h"

	MainManu::MainManu(){
		selectedOption = -1;
	}
	int MainManu::getUserOption () {
		cout << "Main menu:" << endl;
		cout << "	1 - View my balance" << endl;
		cout << "	2 - Withdraw cash" << endl;
		cout << "	3 - Deposit funds" << endl;
		cout << "	4 - Exit" << endl;
		cout << "Enter a choice: " << endl;
		cin >> selectedOption;

		return selectedOption;
	}

