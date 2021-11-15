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

class Doctor
{ //vtable - Doctor::diagnose()
	public:
	virtual void diagnose() {
		cout<<"\nDoctor diagnosing...with lab reports";
	}
};
class Surgeon : public Doctor
{
	//vtable - Surgeon::diagnose()
	public:
	void diagnose() {
		cout<<"\nSurgeon is diagosing..with CTScan";
	}
};

class NeuroSurgeon : public Surgeon
{
//vtable: NeuroSurgeon::diagnose
public:
	void diagnose() {
		cout<<"\nNeuroSurgeon diagnosing with the MRI scan...";
	}
};

int main() {

	Doctor d;
	Surgeon s;
	NeuroSurgeon hs;

	d.diagnose(); //compile time lookup - early binding
	s.diagnose(); //compile time lookup - early binding
	hs.diagnose(); //compile time lookup - early binding


	cout<<"\n------------";

	Doctor *ptr;

	ptr = new Doctor(); // dynamic memory allocation

	ptr->diagnose(); //Doctor's diagnose

	ptr = new Surgeon(); //now assign surgeon to it

	ptr->diagnose(); //which diagnose???Doctor

	ptr = new NeuroSurgeon(); //now assign NeuroSurgon to it

	ptr->diagnose();  //which diagnose???Doctor

//static binding - early
//dynamic binding - late

//C++ PL - Bjarne Stroustup
//C++ Primer Stanley Lippman
//Effective C++

//is polymorphism dynamic???




	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	dial(100, 102);
	dial("Julie");
	dial(100);
	dial();
	return 0;
}
