/*
 * Bronze.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: admin
 */


#include <iostream>
#include "credit.h"
#include "Bronze.h"
using namespace std;

void Bronze :: getName()
{
	cout << "Bronze Credit Card"  << endl;
}

void Bronze::accept(OfferVisitor *v)
{
	v->visitBronzeCreditCard(this);
}
