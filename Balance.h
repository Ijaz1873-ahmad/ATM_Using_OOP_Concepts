/*
 * Balance.h
 *
 *  Created on: Dec 26, 2020
 *      Author: ijaz
 */

#ifndef BALANCE_H_
#define BALANCE_H_


#include "Person.h"

class Balance : public Person{
protected:
	double balance;
public:
	Balance();
	void ShowBalance();
};


#endif /* BALANCE_H_ */
