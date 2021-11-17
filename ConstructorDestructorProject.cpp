//============================================================================
// Name        : ConstructorDestructorProject.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class BankAccount
{
private:
		int accountNumber;			//  4
		char accountHolder[20];		// 20
		double accountBalance;		//  8

public:
		BankAccount() {
			cout<<"\nBankAccount()...initialize something.....";
			// array =  new char[50];
				//if files/nw/threads are open
		}

		~BankAccount() {
			cout<<"\n~BankAccount()...to clean-up something.....";
				//close the files/nw/threads here
			// delete array;
		}

};

int main() {
	cout << "begin main " << endl; // prints !!!Hello World!!!

	//BankAccount ba = new BankAccount(); //java way or c# way

	BankAccount baObj;

	BankAccount *ptr; // its not an object
		// it a pointer to the object

	cout<<"\nSize of baObj : "<<sizeof(baObj);
	cout<<"\nSize of *ptr  : "<<sizeof(*ptr);
	cout<<"\nSize of ptr   : "<<sizeof(ptr);


	ptr = new BankAccount; //dynamic allocation of the object
		//if delete is not called, memory leak

	delete ptr; // we tend to forget this line

	cout << "\nend main " << endl; // prints !!!Hello World!!!

	return 0;
}

// 1       2        3
//fun()-> foo()-->far()
//  6      5        4
