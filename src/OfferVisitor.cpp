/*
 * OfferVisitor.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: admin
 */

#include <iostream>
#include "OfferVisitor.h"

using namespace std;

void GasOfferVisitor :: visitBronzeCreditCard(Bronze *bronzeCreditCard)
{
	cout << "Computing gas offer using bronze credit card" << endl;
}

void GasOfferVisitor :: visitGoldCreditCard(Gold *goldCreditCard)
{
	cout << "Computing gas offer using Gold credit card" << endl;
}

void GasOfferVisitor :: visitSilverCreditCard(Silver *SilverCreditCard)

{
	cout << "Computing gas offer using Silver credit card" << endl;
}


void FoodOfferVisitor :: visitBronzeCreditCard(Bronze *bronzeCreditCard)
{
	cout << "Computing Food offer using bronze credit card" << endl;
}

void FoodOfferVisitor :: visitGoldCreditCard(Gold *goldCreditCard)
{
	cout << "Computing Food offer using Gold credit card" << endl;
}

void FoodOfferVisitor :: visitSilverCreditCard(Silver *SilverCreditCard)
{
	cout << "Computing Food offer using Silver credit card" << endl;
}


void FlightOfferVisitor :: visitBronzeCreditCard(Bronze *bronzeCreditCard)
{
	cout << "Computing Flight offer using bronze credit card" << endl;
}

void FlightOfferVisitor :: visitGoldCreditCard(Gold *goldCreditCard)
{
	cout << "Computing Flight offer using Gold credit card" << endl;
}

void FlightOfferVisitor :: visitSilverCreditCard(Silver *SilverCreditCard)
{
	cout << "Computing Flight offer using Silver credit card" << endl;
}



