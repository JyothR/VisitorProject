/*
 * Gold.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: admin
 */



#include <iostream>
#include "credit.h"
#include "gold.h"
using namespace std;

void Gold :: getName()
{
	cout <<  "Gold Credit Card ";
}

void Gold ::accept(OfferVisitor *v)
{
	v->visitGoldCreditCard(this);
}
