/*
 * WithdrawCash.cpp
 *
 *  Created on: Dec 26, 2020
 *      Author: ijaz
 */



#include "WithdrawCash.h"


	withdrawCash::withdrawCash(){
		this->valueToWithdraw = 0;
		this->isNotFinished = true;
	}

	void withdrawCash::ShowBalance(){
		cout << "After Withdraw You have:" << endl;
		cout << "$ " << balance << endl;
	}

	void withdrawCash::WithdrwaMoney(){
		int selectedOption = -1;
		//bool isNotFinished = true;

		do {

			cout << "Withdrawal options:" << endl;
			cout << "1 - $20" << endl;
			cout << "2 - $40" << endl;
			cout << "3 - $60" << endl;
			cout << "4 - $100" << endl;
			cout << "5 - $200" << endl;
			cout << "6 - cancel transaction" << endl;
			cout << "choose a withdrawal option (1-6)" << endl;

			cin >> selectedOption;
			switch (selectedOption) {
				case 1:
					valueToWithdraw = 20;
					break;
				case 2:
					valueToWithdraw = 40;
					break;
				case 3:
					valueToWithdraw = 60;
					break;
				case 4:
					valueToWithdraw = 100;
					break;
				case 5:
					valueToWithdraw = 200;
					break;
				case 6:
					isNotFinished = false;
					break;
				default:
					cout << "Invalid option! Try again." << endl;
					break;
			}

			if (valueToWithdraw != 0) {
				if (valueToWithdraw > balance) {
					cout << "You just have $" << balance << ". You can't withdraw $" << valueToWithdraw << endl;
				} else {
					balance = balance - valueToWithdraw;
					isNotFinished = false;
				}
				valueToWithdraw = 0;
			}

		} while (isNotFinished);
	}



