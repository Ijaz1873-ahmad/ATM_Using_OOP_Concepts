/*
 * Person.cpp
 *
 *  Created on: Dec 26, 2020
 *      Author: ijaz
 */



#include "Person.h"
#include <fstream>
#include <iostream>
using namespace std;


	Person::Person(){
		givenAccountNumber = '\0';
		givenPinNumber = '\0';
		isAccountInvalid = true;
		isPinInvalid = true;
		accountNumber = '\0';
		pinNumber = '\0';
	}

	bool Person::login(){

		cout << "\t\t!!!-----Welcome-----!!!" << endl;

		while(isAccountInvalid){

			ifstream inputAc;
			inputAc.open("ReadAccountNo.txt");

			cout << "Please enter your account number: ";
			cin >> givenAccountNumber;

			while( ! inputAc.eof() ){
				inputAc >> accountNumber;

				if (givenAccountNumber == accountNumber) {
					isAccountInvalid = false;
					break;
				}

			}
			if(isAccountInvalid == true){
				cout << "Invalid account number! Try again." << endl;
			}

		}

		while(isPinInvalid){

			ifstream inputPin;
			inputPin.open("ReadPinNo.txt");

			cout << "Enter your PIN: ";
			cin >> givenPinNumber;

			while( ! inputPin.eof() ){
				inputPin >> pinNumber;

				if (givenPinNumber == pinNumber) {
					isPinInvalid = false;
					break;
				}

			}
			if(isPinInvalid == true){
				cout << "Invalid PIN number! Try again." << endl;
			}

		}
		return true;
	}



