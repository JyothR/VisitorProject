/*
 * Bronze.h
 *
 *  Created on: 28-Mar-2022
 *      Author: admin
 */

#ifndef BRONZE_H_
#define BRONZE_H_

#include <iostream>
#include "credit.h"
#include "OfferVisitor.h"
using namespace std;

class Bronze : public Credit_card
{
public:
	Bronze(){};
	void getName();
	void accept(OfferVisitor *v);
};



#endif /* BRONZE_H_ */
