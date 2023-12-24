/*
 * Person.h
 *
 *  Created on: Dec 26, 2020
 *      Author: ijaz
 */

#ifndef PERSON_H_
#define PERSON_H_


#include <fstream>
#include <iostream>
using namespace std;

class Person{
protected:
	string givenAccountNumber ;
	string givenPinNumber ;
	bool isAccountInvalid ;
	bool isPinInvalid ;
	string accountNumber;
	string pinNumber;
public:
	Person();
	bool login();
};



#endif /* PERSON_H_ */
