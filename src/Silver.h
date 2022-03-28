/*
 * Silver.h
 *
 *  Created on: 28-Mar-2022
 *      Author: admin
 */

#ifndef SILVER_H_
#define SILVER_H_

#include <iostream>
#include "credit.h"
//#include "OfferVisitor.h"
using namespace std;

class Silver : public Credit_card
{
public:
	Silver(){}
	void getName();
	void accept(OfferVisitor *v);
};





#endif /* SILVER_H_ */
