/*
 * Bank.c
 *
 *  Created on: 15-Nov-2021
 *      Author: apple
 */
#include <stdio.h>
#include <string.h>

/*

 data types

  Integral floating	   string
  int		float		char[]

*/
struct BankAccount //structures in C, cannot be associated with a function
{
	private:
		int accountNumber;
		char accountHolder[20];
		double accountBalance;

	public:

		void setBankAccount(int an, char ah[], double ab) {
			printf("\nsetBankAccount....");
			accountNumber = an;
			strcpy(accountHolder,ah);
			accountBalance = ab;
		}
		void printBankAccount() //read only printing
		{
			printf("\nAccount Number  : [%20d]",accountNumber);
			printf("\nAccount Name    : [%-20s]",accountHolder);
			printf("\nAccount Balance : [%20.2lf]",accountBalance);
		}
}; //the default access specifier is public - in structures

struct Song
{
	private:
		int songYear;
		char songTitle[20];
		char songAlbum[20];

	public:
		void setSong(int sy, char st[], char sa[]) {
			printf("\nsetSong....");
			songYear = sy;
			strcpy(songTitle,st);
			strcpy(songAlbum,sa);
		}
		void printSong() //read only printing
		{
			printf("\nSong Year   : [%20d]",songYear);
			printf("\nSong Title  : [%-20s]",songTitle);
			printf("\nSong Album  : [%-20s]",songAlbum);

		}

};

struct MyBank {

};

class MySong {
	//by default everything in a class is private
};

int main() {

	struct BankAccount baAcc1;
	baAcc1.setBankAccount(101,"Bismar",50000);

	struct Song song1;
	song1.setSong(1998,"I want it that way","Backstreet Boys");

	baAcc1.printBankAccount();//passing the value
	printf("\n-------\n");
	song1.printSong(); //passing the value


	//song1.songYear = baAcc1.accountBalance; //ohh!!!
	//strcpy(song1.songTitle,baAcc1.accountHolder);
//	strcpy(baAcc1.accountHolder,song1.songTitle);
//	baAcc1.accountBalance=song1.songYear;

	printf("\nlets print again...");

	baAcc1.printBankAccount();
	printf("\n-------\n");
	song1.printSong();

	return 0;
}


