/*

 	 	 	 	 	 	 	    who
 	 	 	 	 	 	 		| role?
 	 	 	 	 	 	 ----------------
 	 	 	 	 	 	 |				|
 	 	 	 	 	 	 when			where
 	 	 	 	 	 	 |time			|space
 	 	 	 	 	 -------------------------
 	 	 	 	 	 |			|			|
 	 	 	 	 	 why		what		how [application]
 	 	 	 	 	 |			|			|
 	 	 	 	 	reason	inFORMation		implementation
 	 	 	 	 							|
 	 	 	 	 						--------
 	 	 	 	 						|		|
 	 	 	 	 					success	feedback


 1	 	why not Machine?
 2	 	why not Assembly?
 ----------------------------
 3	 	why not C?
 no objects in C!!!

 structures in C


 3	 	why C++?

 Object ?
 -----------------------
 4	 	why Java? pros/cons


Agenda of the day
------------------
1. Why C++?

	C strctures doesnt permit functions in it.
	C++ structure permits the functins within it, but default
		is public
	hence
	we would use classes over structures
	since classes default specifier is private


		C						C++
		POPs					OOPS
		|						|
	procedure oriented		Object oriented
	|							|
	procedure <-- data		data <--- procedure
	|							|
	withdraw()					accBalance <-- with access specifiers
	deposit()					|  + contract of a class
	+							withdraw()
	accBalance					deposit()
	|							|
	top to bottom				bottom to top



	shirt cloth piece --customer-------------------------------> a shirt
	 	 	 	 	 	 |1			|2        |3    |4		  |5
	 	 	 	 {	paper/pencil   plot the   cut   stitching  customer
	 	 	 	 write down the		cutting   [ scissors ]   needle/thread
	 	 	 	 measurements		diagram }  the cloth [chalk]
	 	 	 	 	 |
	 	[ 12/14 numbers initialize data structure]
	 	 	32 34      30


	contract of a class = association of the "data" with "concerned
							functions"

from C to C++		paradigm shift

2. Object Oriented Paradigm

			Object = state <-- behaviour
			Car    = milesDriven <--- drive(), reverseTheCar();
			Account = accBalance <-- deposit(),withdraw()
			Cat     = age,color <--- chaseMice(), drinkMilk, snooze();

		Water Bottle = size, capacity, color <-- open(), close(), refill()
						|		|      |				  |
					750ml	1000ml    silver	we as a human running above function

		Pen  = color, inkLevel, inkSize, company
							+
						write(), <-- function of a Writer/
										Author/Poet/NewsEditor



				A S S O C I A T I O N
							|
			----------------------------------
			|		|			|		|
			isA		hasA		usesA	produceA
			<--structural-->	<--operational-->
			 fixtures

	class Machine { }

	class CardSwipeMachine
	{
		CardReader theReader; //hasA

	prouducesA			usesA		usesA		usesA
		|				  |				|		|
		Bill swipeAndPay(Card theCard, int amt, int pin)
		{
			..
			..
			Bill theBill; // would mention last 4 digits of the card
							// the bank name, time, amount, ... ....
			...
			//sms, mail,
			return theBill; <--- return the object [ producesA ]
		}
	}


class Song { }
class RockSong : public Song { }
class PopSong : public Song {}


class Doctor {
}
class Surgeon : public Doctor {
}
class HeartSurgeon : public Surgeon {
}
class NeuroSurgeon : public Surgeon {
}

class BankAccount { }
class SavingsAccount : public BankAccount { }
class FixedDepositAccount : public SavinsAccount { }
class CurrentAccount : public BankAccount { }

			BankAccount <---- generalization
				|acno,name,balance
		-------------------
		|isA		|isA   --- properties are cascaded
	SavingsAccount	CurrentAccount <-- specialization
	|rate			|overdraftlimit
	|
FixedDepositAccount <-- specialization of specialization
	|maturityYear
	|
FlexiFixed...
	|flextMaturityTerm

XML - data description / for transfer




			Song
			|
	------------------
	|isA			|isA
	RockSong	PopSong

space+time+situation

Mother + Father
 |		  |
 DNA	DNA
  |	   |
	kid


				C++
				| <--developer has to take care of memory management
				| memory leak
				|
				| <-- system management + your domain
				|							airline
				|							banking

		------------------
		|			|
		C#			Java

		quantum computers = google

		modern super computer can take  10000 years = complex math

		bit 0 or 1

		qbit  0
			  1
			  01
			  10


			  wave + particle theory


			   pet - dog  -- india [ think - lets goto home USA ]
										quantum event



	base		Doctor - doesnt know who is the child class - super
				|
		--------------------
		|isA
derived	Surgeon (sub) - Surgeon is appearing a Doctor
		|
	--------------
	|isA		| isA
HeartSurgeon	NeuroSurgeon


hasA
------

class Filament
{

}
class Bulb
{
	Filament filament; //hasA - fatal or vital element here

}

class Heart
{

}
class Human
{
	Heart heart [ feels ]; //hasA  30 times faster than the brain [thinks]

}

class WashingMachine
{
	WashingTub theTub; //hasA



}



class String
{
	private:
		char *array;
		some functions
		some classes [ nested ]


	public:
		String(char *data)
		{
			array = malloc(strlen(data));
			strcpy(array,data);
		}
		char* operator<<() {
			return array;
		}

}

3. OOPS concepts


	String str("Bismar from USA");
	cout<<str;

	for a farmer how the ATM works, doesnt matter
	for an ATM engineer, how the crops are grown doesnt matter

	1. abstraction - some ready made classes of C++ / STL

		"HIDING THE COMPLEXITY" OF AN OBJECT AND PROVIDING
		ITS USAGE VIA "SIMPLE ACCESSIBLE FUNCTIONS"

		IT IS THE "WHAT IS?" PART OF AN OBJECT

		WHAT IS AN ATM??? CHIPSET OF THE CARD, CASH DISPENSER
								NETWORKING

				a. data abstraction
						hide the data [ make it private ]
						how much cash is there in an ATM?
						how many people hit the atm everyday???
						what is the closing cash of the ATM today?

				b. procedural abstraction
						a. do we know that "we are being recorded"
						b. are we being logged on the paper???
						c. time log is maintained, each press is recorded

				c. class abstraction
						a. nested [ internal ] classes
						   subsystem !!!

				Surgeon -> surgery -> length | depth

			class BankAccount
			{

					class Permission {
						canWithdraw, canTransfer, canDeposit

					}

				void withdraw() { }
			};

			simply "book a ticket" click!!!!!


5.30
|
9.30

	2. encapsulation

			BIND THE DATA + WITH CONCERNED FUNCTIONS


			IT IS THE "HOW IS IT?" PART OF AN OBJECT

			HOW IS AN ATM WORKING ?

			DEVELOPING THE COMPLEX CODE FOR AN ATM
				|
				what to hide? cash dispenser is hidden
					"Admin screen is hidden" [ PRIVAET ]


				what not to hide? a thin slot to get the cash is shown
				the screen to show some options [ PUBLIC ]

			how to book a flight ticket????
				|
				we develop the code


					DB
					|
					entity [ find out the beer of your choice ]
					|
					repo - ticket repository | beer repository [ kitchen]
					|
					service - flight ticket booking service
					|
				controller
				|
				wesite <-- book a ticket <-- user clicks here
						order a beer <-- from your table




	3. polymorphism
			ABILITY OF A BUSINESS ENTITY TO HAVE MANY FORMS


			POLY = MANY
			MORPHISM = FORMS


	4. inheritance
	5. object communication

------------------



 */




//============================================================================
// Name        : Greet.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/*
#include <iostream>
#include <string>

using namespace std;
class BankAccount {
public:
	double getBankAccountBalance() const {
		return bankAccountBalance;
	}

	void setBankAccountBalance(double bankAccountBalance) {
		this->bankAccountBalance = bankAccountBalance;
	}

	char* getBankAccountHolderName()  {
			return bankAccountHolderName;
	}

	void setBankAccountHolderName( char name[])  {
		strcpy(bankAccountHolderName,name);
	}

	int getBankAccountNumber() const {
		return bankAccountNumber;
	}

	void setBankAccountNumber(int bankAccountNumber) {
		this->bankAccountNumber = bankAccountNumber;
	}

	private:
	int bankAccountNumber;
	char bankAccountHolderName[30];
	double bankAccountBalance;


};
int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	BankAccount baObj;
	baObj.setBankAccountNumber(101);
	baObj.setBankAccountHolderName("Jack");
	baObj.setBankAccountBalance(5000);

	cout<<"\naccount number  : "<<baObj.getBankAccountNumber();
	cout<<"\naccount name    : "<<baObj.getBankAccountHolderName();
	cout<<"\naccount balance : "<<baObj.getBankAccountBalance();


	return 0;
}
*/
