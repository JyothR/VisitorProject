/*
 * credit.h
 *
 *  Created on: 28-Mar-2022
 *      Author: admin
 */

#ifndef CREDIT_H_
#define CREDIT_H_

#include <iostream>
#include "OfferVisitor.h"
using namespace std;

class Credit_card
{
public:
	virtual void  getName() = 0;
	virtual void accept(OfferVisitor *v) = 0;
};



#endif /* CREDIT_H_ */
