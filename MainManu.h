/*
 * MainManu.h
 *
 *  Created on: Dec 26, 2020
 *      Author: ijaz
 */

#ifndef MAINMANU_H_
#define MAINMANU_H_

#include "Person.h"

class MainManu : public Person{
// protected:
	int selectedOption;
public:
	MainManu();
	int getUserOption ();
};



#endif /* MAINMANU_H_ */
