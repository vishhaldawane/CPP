//============================================================================
// Name        : STLProject.cpp
// Author      : Vishhal
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <list>
#include <set>

using namespace std;

class ChemicalElement
{
	int atomicNumber; //1
	string atomicName; // Hydrogen
	string atomicFormula; // H
	double atomicWeight; //

	public:
	ChemicalElement(int atomicNumber, string atomicName, string atomicFormula, double atomicWeight) {

			this->atomicNumber = atomicNumber;
			this->atomicName = atomicName;
			this->atomicFormula = atomicFormula;
			this->atomicWeight = atomicWeight;
	}
	string toString() {
			return "ChemicalElement [atomicNumber=" + atomicNumber + ", atomicName=" + atomicName + ", atomicFormula="
					+ atomicFormula + ", atomicWeight=" + atomicWeight + "]";
	}
};

int main() {

	ChemicalElement element1(1, "Hydrogen", "H", 1.008);
	ChemicalElement element2(12, "Magnessium", "Mg", 24.305);
	ChemicalElement element3(8, "Oxygen", "O", 15.999);
	ChemicalElement element4(14, "Silicon", "Si", 28.085);
	ChemicalElement element5(3, "Lithium", "Li", 6.94);

	set<int> numberSet; //balanced binary tree

	numberSet.insert(34); //root
	numberSet.insert(43);
	numberSet.insert(23);

	numberSet.insert(12);
	numberSet.insert(27);

	numberSet.insert(53);
	numberSet.insert(40);

	set<int> :: iterator itr;
	for(itr=numberSet.begin(); itr!= numberSet.end(); itr++) {
		cout<<*itr<<endl;
	}

/*
 * 		 34
 * 		<|
 * 	---------
 * 	|		|
 * 	23		43
 *   |		 |
 * -----   ------
 * |   |   |    |
   12  27 40	53


 */


}


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
	void showContact() {
		cout<<"\nName        : "<<name;
		cout<<"\nphoneNumber : "<<phoneNumber;
		cout<<"\nemail       : "<<email;
	}
	long getPhoneNumber() const {
		return phoneNumber;
	}
	bool operator <(const Contact & contactObj) const
	    {
	        return phoneNumber < contactObj.phoneNumber;
	    }
};

void printContact(list<Contact> theList)
{
	list <Contact> :: iterator listIterator;
	for(listIterator = theList.begin(); listIterator != theList.end(); ++listIterator)
	{
		listIterator->showContact();
	}
}

struct ContactComparator
{

    bool operator ()(const Contact &contact1, const Contact& contact2)
    {
        if(contact1.getPhoneNumber() == contact2.getPhoneNumber())
            return contact1 < contact2; //check the phone number in < overloaded function
        return contact1.getPhoneNumber() < contact2.getPhoneNumber();
    }
};


int sun() {

	Contact contact1("Bismar",823123,"bismar36@hotmail.com");
	Contact contact2("Vishhal",223123,"vishhal@hotmail.com");
	Contact contact3("Julia",323123,"julia@hotmail.com");

	list <Contact> phoneList;
//	phoneList.push_front(contact1);
//	phoneList.push_front(contact2);
//	phoneList.push_front(contact3);

	phoneList.push_back(contact1);
	phoneList.push_back(contact2);
	phoneList.push_back(contact3);

	printContact(phoneList);


	list<int> numbers;
	numbers.push_back(10);
	numbers.push_back(30);
	numbers.push_back(20);
	numbers.push_back(15);

	list <int> :: iterator numIterator;
	cout<<endl;
	for(numIterator = numbers.begin(); numIterator != numbers.end(); ++numIterator)
		{
			cout<<*numIterator<<endl;
		}

	numbers.sort();

	cout<<"\n------after sort---";
	cout<<endl;
	//list <int> :: iterator numIterator;
			for(numIterator = numbers.begin(); numIterator != numbers.end(); ++numIterator)
			{
				cout<<*numIterator<<endl;
			}

	printContact(phoneList);
	cout<<"\nAFTER SORT";
	phoneList.sort(ContactComparator()); //custom comparator
	printContact(phoneList);

	return 0;
}
*/



class Log
{
	int logNumber;
	string logMessage;
	string logType;

public:
	Log(int ln, string lm, string  lt) {
		logNumber=ln;
		logMessage = lm;
		logType=lt;
	}
	void printLog() {
		cout<<"\nLog Number  : "<<logNumber;
		cout<<"\nLog Message : "<<logMessage;
		cout<<"\nLog Type    : "<<logType;
		cout<<"\n------------";
	}
};





/*
int moon() {

	const int SIZE=4;

	Log logArray[SIZE] = {
			Log(1,"User login successful","INFO"),
			Log(2,"User login failed","WARN"),
			Log(3,"User file denied","ERR"),
			Log(4,"User file uploaded","INFO")
	};

	vector<Log> mylogReport; //LIFO

	cout<<"\nSize of myLogReport : "<<mylogReport.size();
	cout<<"\ncapacity  of myLogReport : "<<mylogReport.capacity();
	cout<<"\nMax Size of myLogReport : "<<mylogReport.max_size();



	for(int i=0;i<SIZE;i++) {
		cout<<"\nAdding phone Numbers";
		mylogReport.push_back(logArray[i]);

	}

	cout<<"\nlets print the logs...";

	for(auto log = mylogReport.rbegin(); log!= mylogReport.rend(); log++) {
		log->printLog();
		//mylogReport[i].printLog();
		//i.printLog();

	}

	cout<<"\n-------------";

	for (auto i :  mylogReport) {
		i.printLog();
	}
return 0;
}
*/

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
