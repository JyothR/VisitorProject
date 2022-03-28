/*
 * OfferVisitor.h
 *
 *  Created on: 28-Mar-2022
 *      Author: admin
 */

#ifndef OFFERVISITOR_H_
#define OFFERVISITOR_H_

#include <iostream>
class Bronze;
class Gold;
class Silver;


using namespace std;

class OfferVisitor
{
public:
	virtual void visitBronzeCreditCard(Bronze *bronzeCreditCard) = 0;
	virtual void visitGoldCreditCard(Gold *goldCreditCard) = 0;
	virtual void visitSilverCreditCard(Silver *silverCreditCard) = 0;
};

class GasOfferVisitor : public OfferVisitor
{
public:
	void visitBronzeCreditCard(Bronze *bronzeCreditCard);

	void visitGoldCreditCard(Gold *goldCreditCard);

	void visitSilverCreditCard(Silver *SilverCreditCard);

};

class FoodOfferVisitor : public OfferVisitor
{
public:
	void visitBronzeCreditCard(Bronze *bronzeCreditCard);

	void visitGoldCreditCard(Gold *goldCreditCard);

	void visitSilverCreditCard(Silver *SilverCreditCard);

};

class FlightOfferVisitor : public OfferVisitor
{
public:
	void visitBronzeCreditCard(Bronze *bronzeCreditCard);

	void visitGoldCreditCard(Gold *goldCreditCard);

	void visitSilverCreditCard(Silver *SilverCreditCard);

};





#endif /* OFFERVISITOR_H_ */
