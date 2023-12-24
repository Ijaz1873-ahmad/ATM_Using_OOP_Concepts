/*
 * DepositCash.h
 *
 *  Created on: Dec 26, 2020
 *      Author: ijaz
 */

#ifndef DEPOSITCASH_H_
#define DEPOSITCASH_H_

#include "Balance.h"

class DepositCash : public Balance{
	int selectedOption;;
	bool isNotFinished;
public:

	DepositCash();
	void ShowBalance();
	void depositFunds();

};



#endif /* DEPOSITCASH_H_ */
