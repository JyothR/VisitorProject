/*
 * brand.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: admin
 */

#include <iostream>
#include "credit.h"
#include "Bronze.h"
#include "Silver.h"
#include "gold.h"
#include "OfferVisitor.h"

using namespace std;



int main()
{
	cout << "------------Bronze--------------" << endl;

	Credit_card *c = new Bronze();
	OfferVisitor *vGas = new GasOfferVisitor();
	OfferVisitor *vFood = new FoodOfferVisitor();
	OfferVisitor *vFlight = new FlightOfferVisitor();
	c->accept(vFood);
	c->accept(vGas);
	c->accept(vFlight);

	cout << "------------Gold-------------" << endl;

	Credit_card *c1 = new Gold();
	OfferVisitor *vGas1 = new GasOfferVisitor();
	OfferVisitor *vFood1 = new FoodOfferVisitor();
	OfferVisitor *vFlight1 = new FlightOfferVisitor();
	c1->accept(vFood1);
	c1->accept(vGas1);
	c1->accept(vFlight1);

	cout << "------------Silver---------" << endl;

	Credit_card *c2 = new Silver();
	OfferVisitor *vGas2 = new GasOfferVisitor();
	OfferVisitor *vFood2 = new FoodOfferVisitor();
	OfferVisitor *vFlight2 = new FlightOfferVisitor();
	c2->accept(vFood2);
	c2->accept(vGas2);
	c2->accept(vFlight2);

	return 0;
}
