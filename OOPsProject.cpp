//============================================================================
// Name        : OOPsProject.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
//Inheritance


/*Constructor :is a special code block
		it has the same name as of the enclosing class

		what is the job of the default constructor???
				it does NOTHING

		it is called automatically!!! when???
		when the instance of the class is created..

well what is the purpose this the ctor!!!!

		to initialize the state of the object


*/

//GENERALIZATION
class Person
{
	//there is a 1.default constructor | 2.implicit ctor
	// 3.implicit no arg ctor

	//how does  it look like...Person() { }

	private:
		char gender;    // 4
		int  age;		// 4
		char name[20];  // 20

	public:
		Person() {
			cout<<"\nPerson()....";
			age=0;
			name[0]='\0';
			gender='\a';
		}
		void printPerson() {
			cout<<"\ngender : "<<gender;
			cout<<"\nAge    : "<<age;
			cout<<"\nName   : "<<name;
			cout<<"\n----------";
		}

};
/*
 * 		|		|
 * 		|		|
 * 		---------
 * 8	|		|
 * 7	|		|
 * 6	|		|
 * 5  ->|       |
 *      ---------
 * 4 	|		|
 * 3 	|		|
 * 2 	|		| char name[20];
 * 1 	|	M	| char gender 1 -> 4
 *   	+-------+ int  age;
 *
 *   	LIFO
 *   	last in first out
 *
 *
 */


//SPECIALIZATION of the Person
class Student : public Person
{
private:// 3 fields are inherited(28) from the base
	int rollNumber;		//4
	float totalMarks;	//4
	char grade;			//4 (1)

public:
	Student() {//internally invoking base class ctor
		cout<<"\n\tStudent()";
		rollNumber=0;
		totalMarks=0;
		grade='\a';
	}
	void printStudent() {
		Person::printPerson(); //invoke super class method/ base class method/function
		cout<<"\nRoll   : "<<rollNumber;
		cout<<"\nTotal  : "<<totalMarks;
		cout<<"\nGrade  : "<<grade;
		cout<<"\n====================";
	}
};

//Employee to be created as a child of Student
//with empno, company, salary


int main() {
	cout << "!!!OOPS CONCEPTS!!!" << endl; // prints !!!Hello World!!!

	Person p1;
	Person p2;
	Person p3;

	cout<<"\nsize of p1 : "<<sizeof(p1);


	p1.printPerson();
	p2.printPerson();
	p3.printPerson();

	Student s1;
	Student s2;
	Student s3;

	cout<<"\nsize of s1 : "<<sizeof(s1);

	s1.printStudent();
	s2.printStudent();
	s3.printStudent();



	return 0;
}
