//============================================================================
// Name        : semesterProject.cpp
// Author      : Ijaz Ahmad
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================
#include "Person.h"
#include "MainManu.h"
#include "Balance.h"
#include "WithdrawCash.h"
#include "DepositCash.h"

#include <iostream>
using namespace std;


int main(void) {
/*
 *
 *here we create objs of every class.
 *
 */
	Person p;
	MainManu m;
	int option = 0;
	withdrawCash c;
	DepositCash d;
	Balance b;


	if (p.login()){
	//	user = m.getUserOption();
		bool isFnish = true;

		do{
			option = m.getUserOption();
			if(option == 1){
				b.ShowBalance();
			}else if(option == 2){
				c.WithdrwaMoney();
				c.ShowBalance();
			}else if(option == 3){
				d.depositFunds();
				d.ShowBalance();
			}else if(option == 4){
				isFnish = false;
				break;
			}else{
				cout << "Invalid option! Try again." << endl;
				break;
			}

		}while(isFnish);
	}


	return 0;
}
