/*
 * WithdrawCash.h
 *
 *  Created on: Dec 26, 2020
 *      Author: ijaz
 */

#ifndef WITHDRAWCASH_H_
#define WITHDRAWCASH_H_

#include "Balance.h"

class withdrawCash : public Balance{
	double valueToWithdraw;
	bool isNotFinished;
public:
	withdrawCash();
	void ShowBalance();
	void WithdrwaMoney();
};



#endif /* WITHDRAWCASH_H_ */
