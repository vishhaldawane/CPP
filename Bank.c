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
	int accountNumber;
	char accountHolder[20];
	double accountBalance;
};

struct Song
{
	int songYear;
	char songTitle[20];
	char songAlbum[20];

};

int main() {

	struct BankAccount baAcc1={101,"Bismar",50000};

	struct Song song1={1998,"I want it that way","Backstreet Boys"};

	printf("\nAccount Number  : [%20d]",baAcc1.accountNumber);
	printf("\nAccount Name    : [%-20s]",baAcc1.accountHolder);
	printf("\nAccount Balance : [%20.2lf]",baAcc1.accountBalance);

	printf("\n-------\n");

	printf("\nSong Year   : [%20d]",song1.songYear);
	printf("\nSong Title  : [%-20s]",song1.songTitle);
	printf("\nSong Album  : [%-20s]",song1.songAlbum);

	//song1.songYear = baAcc1.accountBalance; //ohh!!!
	//strcpy(song1.songTitle,baAcc1.accountHolder);
	strcpy(baAcc1.accountHolder,song1.songTitle);
	baAcc1.accountBalance=song1.songYear;
	printf("\nlets print again...");

	printf("\nAccount Number  : [%20d]",baAcc1.accountNumber);
	printf("\nAccount Name    : [%-20s]",baAcc1.accountHolder);
	printf("\nAccount Balance : [%20.2lf]",baAcc1.accountBalance);

	printf("\n-------\n");

	printf("\nSong Year   : [%20d]",song1.songYear);
	printf("\nSong Title  : [%-20s]",song1.songTitle);
	printf("\nSong Album  : [%-20s]",song1.songAlbum);

	return 0;
}


