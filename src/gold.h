/*
 * gold.h
 *
 *  Created on: 28-Mar-2022
 *      Author: admin
 */

#ifndef GOLD_H_
#define GOLD_H_


#include <iostream>
#include "OfferVisitor.h"
#include "credit.h"

using namespace std;

class Gold : public Credit_card
{
public:
	Gold(){};
	void getName();
	void accept(OfferVisitor *v);
};



#endif /* GOLD_H_ */
