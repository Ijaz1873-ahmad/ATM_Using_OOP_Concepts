/*
 * DepositCash.cpp
 *
 *  Created on: Dec 26, 2020
 *      Author: ijaz
 */



#include "DepositCash.h"

	DepositCash::DepositCash(){
		selectedOption = -1;
		isNotFinished = true;
	}

	void DepositCash::ShowBalance(){
		cout << "After Deposit You have:" << endl;
		cout << "$ " << balance << endl;
	}

	void DepositCash::depositFunds() {

		do {

			cout << "Deposit options:" << endl;
			cout << "1 - $20" << endl;
			cout << "2 - $40" << endl;
			cout << "3 - $60" << endl;
			cout << "4 - $100" << endl;
			cout << "5 - $200" << endl;
			cout << "6 - cancel transaction" << endl;
			cout << "choose a deposit option (1-6)" << endl;

			cin >> selectedOption;
			switch (selectedOption) {
				case 1:
					balance = balance + 20;
					isNotFinished = false;
					break;
				case 2:
					balance = balance + 40;
					isNotFinished = false;
					break;
				case 3:
					balance = balance + 60;
					isNotFinished = false;
					break;
				case 4:
					balance = balance + 100;
					isNotFinished = false;
					break;
				case 5:
					balance = balance + 200;
					isNotFinished = false;
					break;
				case 6:
					isNotFinished = false;
					break;
				default:
					cout << "Invalid option! Try again." << endl;
					break;
			}

		} while (isNotFinished);

	}


