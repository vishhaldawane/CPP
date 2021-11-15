//============================================================================
// Name        : Polymorphism.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/*
 * four types of functions
 * 1. void clearScreen(void)
 * 2. void clearScreen(int x, int y)
 * 3. int  clearScreen(int x, int y)
 * 4. int  clearScreen();
 */
#include <iostream>
using namespace std;

void dial() { //1
	cout<<"\ndial()..self...";
}
void dial(int speedDial) { //2
	cout<<"\ndial(int) "<<speedDial;
}
void dial(char herName[]) { //2
	cout<<"\ndial(char[]) "<<herName;
}
void dial(int num1, int num2) { //2
	cout<<"\ndial(int,int) "<<num1 << " adding "<<num2;
}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	dial(100, 102);
	dial("Julie");
	dial(100);
	dial();
	return 0;
}
