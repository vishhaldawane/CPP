//============================================================================
// Name        : PointersProject.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/*

	Value of any variable is accessed
	via two ways

	1. via its name <-- given by us
	2. via its address <-- given by the machine

	int num=179;

	variable type    -> int
	variable name	 -> num
	variable value	 -> 179
	variable address -> 32860

	179 has a bit pattern [ bit representation ]

	1 	 0  1   1   0  0    1 	1
	128  64	32  16	8  4	2  	1

	128	 +  32 + 16       + 2 +  1 = 179

int
	<------------- 4 bytes ---------------->
	<----------------num------------------->
	0000 0000 0000 0000 0000 0000 1011 0011
	<---1---> <---2---> <---3---> <---4--->
	32768	  32769     32770     32771


char
	<------------- 1 byte ---------------->
	<----------------gender------------------>
								  0000 0000
	                              <---1--->
								  12768

	i want someone to hold this 12768
	and scan 8 bits to read a character


float = 24 digits for decimal + 8 bits for fractional
   <------------- 4 bytes ---------------->
	<----------------rate----------------->
	0000 0000 0000 0000 0000 0000 1011 0011
	<---1---> <---2---> <---3---> <---4--->
	42768	  42769     42770     42771


	i want someone to hold this 42768
	and scan 32 bits [ 24+8] to read a float




double = 54 digits for decimal + 10 bits for fractional
   <------------- 8 bytes ---------------->
	<----------------rate----------------->
	0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000
	<---1---> <---2---> <---3---> <---4---> <---5---> <---6---> <---7---> <---8--->
	52768	  52769     52770     52771		..	..	.	......


	i want someone to hold this 52768
	and scan 64 bits [ 54+10] to read a double



	32768 <-- memory address		int    *ptr1;
	12768 <-- memory address		char   *ptr2;
	42768 <-- memory address		float  *ptr3;
	52768 <-- memory address		double *ptr4;



	i want anyone of this memory address to be stored


	int    *ptr; [ special variable to hold ONLY THE MEMORY ADDRESS ]
	|		 |
	|		 its data type is already declared as "unsigned int"
    |
    it is not the data type of the pointer
    rather it is the type of that variable whose data would
    be scanned by the pointer







	1 bit		0 / 1
	2 bits		00
				01
				10
				11

	3 bits		000
				001
				010
				..
				8 combinations

	4 bits		16
	5 bits		32
	6 bits		64
	7 bits		128
	8 bits		256







	Pointers
	--------
	it is a special variable
	that holds the memory address
	of another variable



*/
#include <iostream>
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	char gender='M';
	int num=179;
	float rate=4.8;
	double distance=98383.8;


	cout<<"\nnum        : "<<num;
	cout<<"\nnum        : "<<*&num; //* - valueAt     & - memory address of num
	cout<<"\nsizeof num : "<<sizeof(num);
	cout<<"\nstored at  : "<<&num<<endl;


	cout<<"\gender         : "<<gender;
	cout<<"\nsizeof gender : "<<sizeof(gender);
	cout<<"\nstored at     : "<<&gender<<endl;


	cout<<"\nrate        : "<<rate;
	cout<<"\nsizeof rate : "<<sizeof(rate);
	cout<<"\nstored at   : "<<&rate<<endl;


	cout<<"\ndistance        : "<<distance;
	cout<<"\nsizeof distance : "<<sizeof(distance);
	cout<<"\nstored at       : "<<&distance<<endl;

	return 0;
}
