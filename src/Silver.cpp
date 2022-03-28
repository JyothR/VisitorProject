/*
 * Silver.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: admin
 */




#include <iostream>
#include "credit.h"
#include "Silver.h"
using namespace std;


void Silver :: getName()
{
	 cout << "Silver  Credit Card " << endl;
}

void Silver ::accept(OfferVisitor *v)
{
	v->visitSilverCreditCard(this);
}
