//============================================================================
// Name        : STLProject.cpp
// Author      : Vishhal
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

using namespace std;

/*
class Contact
{
	string name;
	long phoneNumber;
	string email;
public:
	Contact(string n, long pn, string e) {
		name=n;
		phoneNumber = pn;
		email = e;
	}
	void printContact() {
		cout<<"\nName : "<<name;
		cout<<"\nName : "<<name;
		cout<<"\nName : "<<name;

	}
};
*/

class Log
{
	string logMessage;
	string logType;

public:
	Log(string lm, string  lt) {
		logMessage = lm;
		logType=lt;
	}
	void printLog() {
		cout<<"\nLog Message : "<<logMessage;
		cout<<"\nLog Type    : "<<logType;
		cout<<"\n------------";
	}
};

int main() {

	const int SIZE=4;

	Log logArray[SIZE] = {
			Log("User login successful","INFO"),
			Log("User login failed","WARN"),
			Log("User file denied","ERR"),
			Log("User file uploaded","INFO")
	};

	vector<Log> mylogReport; //LIFO

	for(int i=0;i<SIZE;i++) {
		cout<<"\nAdding phone Numbers";
		mylogReport.push_back(logArray[i]);

	}

	cout<<"\nlets print the logs...";

	for(auto i = mylogReport.begin(); i!= mylogReport.end(); i++) {
		//log.printLog();
		mylogReport[i].printLog();
		//i.printLog();

	}

	for (int i = 0; i <= mylogReport.size() - 1; i++) {
		mylogReport[i].printLog();
	}

}

//23 design patterns
//singleton design pattern

/*
class Kitchen
{
private:
	Kitchen() {
		cout<<"\nKitchen()";
	}
	 //one copy - default is null
	static Kitchen *ref;
	static bool created;

public:

	static Kitchen* getKitchen() {

		if(!ref) {
			cout<<"\ncreating the object....";

			ref = new Kitchen;
			created=true;

		}
		return ref;
	}
};

Kitchen *Kitchen::ref=NULL;
bool Kitchen::created=false;


int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	Kitchen *k15=Kitchen::getKitchen();
	Kitchen *k16=Kitchen::getKitchen();
	Kitchen *k17=Kitchen::getKitchen();

	Kitchen *k1 = Kitchen::getKitchen();
	Kitchen *k2 = Kitchen::getKitchen();
	Kitchen *k3 = Kitchen::getKitchen();


	cout<<"\nk1 : "<<k1;
	cout<<"\nk2 : "<<k2;
	cout<<"\nk3 : "<<k3;

	cout<<"\nk1 : "<<k15;
		cout<<"\nk2 : "<<k16;
		cout<<"\nk3 : "<<k17;

	return 0;
}

*/


/*

  	Components Orthogonal Space
 *
 *							x -- data type - 1) SoftDrink
 * 							|				 2) Noodles
 * 							|				 3) fried rice
 * 					---------------------	 4) chicken chilly
 * 					|		|			|	 5) coconut water
 * 					y		i			z	 6) Pickles
 * 					|		|			|	 7) Covid Vaccine
 * 					|		|			|
 * 				container	iterator	algorithm
 * 				|			|			|
 * 		1)		Bottle		Straw		drink(); -> Water, ColdCoffee, Juice, softdrink
 * 		2)		Bowl		chopsticks	eat();
 * 		3)		Plate		Spoon		eat();
 * 		4)		Plate		Fork		eat();
 * 		5)      Coconut		Straw		drink();
 * 		6)      Plate		finger		lick();
 *
 * 		7)		WineGlass	mouth		sipIt()
 * 		8)		TinyBottle	syringe		inject()
 *

 	 	 	 	 	 Collection
 	 	 	 	 	 |
 	 	 	 	------------------
 	 	 	 	|				|
  			List				Set
  	  	  	  |					|
  	  	  -----------		----------------
  	  	  |		   |		|			|
  	 ArrayList	LinkedList  TreeSet		HashSet
  	 growable	1<->2<->3
  	 array						Root
  	 	 	 	 	 	 	    |
  	 	 	 	 	 	 	 ---------------
  	 	 	 	 	 	 	 |		   |
  	 	 	 	 	 	 	 L		   R
  	 	 	 	 	 	 	 |			|
  	 	 	 	 	 	 --------	-----------
  	 	 	 	 	 	 |		|	|		|
  	 	 	 	 	 	 L		R	L		R


  	 	DataStructure








 */
