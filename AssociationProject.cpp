//============================================================================
// Name        : AssociationProject.cpp
// Author      : Vishhal
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//class BankCard; //forward declaration here
class Card
{
public:
	void cardIt() {
		cout<<"\nCardIt..";
	}
};

class BankCard : public Card
{
	char cardNumber[17]; //16 digits card number, plus \0
	char bankName[20];

public:
	void bankCardIt() {
		cout<<"\nBank CardIt..";
	}
	void setBankName(char bn[]) {
		strcpy(bankName,bn);

	}
	char* getCardNumber() {
		return cardNumber;
	}
	void setCardNumber(char cn[]) {
		strcpy(cardNumber,cn);
	}
	char* getBankName() {
		return bankName;
	}
};


class Machine
{
	int machineId;
	char machineName[20];

public:
	Machine(int m, char mn[]) {
		machineId = m;
		strcpy(machineName,mn);
	}
};

class Reader
{
public:
	void readIt() {
		cout<<"\nReading it...";
	}
};
class BankCardReader : public Reader
{
	public:

	void probeIt(BankCard card) {
		readIt();
		cout<<"\nProbing ..."<<card.getBankName();
	}
};


class Bill
{
public:
	void billIt() {
		cout<<"\nBill it...";
	}
};
class BankBill : public Bill
{
	float billAmount;

public:
	void bankBillIt() {
		billIt();
		cout<<"\nBank Bill it...";
	}
	void setBillAmount(float ba) {
		billAmount=ba;
	}
	float getBillAmount() {
		return billAmount;
	}
};

class BankCardMachine : public Machine //isA
{
	BankCardReader bankCardReader; // hasA

public:
		BankCardMachine(int n, char mn[]) : Machine(n,mn) {

		}
		BankBill swipeIt(BankCard bankCard, float amountToTransact) {

			bankCardReader.probeIt(bankCard);
			BankBill bankBill;
			bankBill.setBillAmount(amountToTransact);
			cout<<"\n======= B A N K  B I L L =======";
				cout<<"\nBank Name   : "<<bankCard.getBankName();
			cout<<"\n--------------------------------";
				char array[20];
				//the system generated date of the bill
				strcpy(array,bankCard.getCardNumber());
				//bank account holder name which is stored in the card
				//
				printf("\nCard Number : **** **** **** %s",&array[12]); //13 14 15 16
				 cout<<"\nAmount      : "<<bankBill.getBillAmount();
			cout<<"\n--------------------------------";
			return bankBill;
		}
};


int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	BankCardMachine bankCardMachine(123,"Google");
	BankCard myBankCard;
	myBankCard.setBankName("Standard Chartered");
	myBankCard.setCardNumber("1234567887653458");
	float amountToTransact=400;

	BankBill bankBill = bankCardMachine.swipeIt(myBankCard, amountToTransact);
	cout<<"\nBill amount verified is : "<<bankBill.getBillAmount();
	return 0;
}
