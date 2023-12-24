/*
 * Balance.cpp
 *
 *  Created on: Dec 26, 2020
 *      Author: ijaz
 */



#include "Balance.h"

	Balance::Balance(){
		this->balance = 500;
	}
	void Balance::ShowBalance(){
		cout << "Before any Action You have:" << endl;
		cout << "$ " << balance << endl;
	}
