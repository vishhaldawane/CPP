//============================================================================
// Name        : MultipleLevelInheritanceProject.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//vtable <-- &Engine::startEngine()
class Engine
{
	public:

	Engine() {
		cout<<"\nEngine()...";
	}
	virtual void startEngine() { //virtual functions are hierarchical in nature
		cout<<"\nInitializing the engine...";
	}
};

/* vtable <-- &PetrolEngine::startEngine()
 	 	  <-- &PetrolEngine::startPetrolEngine()
 */
class PetrolEngine : public virtual Engine
{
	public:

	PetrolEngine() {
		cout<<"\nPetrolEngine()...";
	}
	void startEngine() { //virtual functions are hierarchical in nature
			cout<<"\ninitializing the petrol engine...";
	}
	void startPetrolEngine() {
		cout<<"\nStarting the petrol engine...";
	}
};

/* vtable <-- &CNGEngine::startEngine()
 	 	  <-- &CNGEngine::startCNGEngine()
 */
class CNGEngine : virtual public Engine
{
	public:

	CNGEngine() {
		cout<<"\nCNGEngine()...";
	}
	void startEngine() { //virtual functions are hierarchical in nature
				cout<<"\ninitializing the cng engine...";
	}
	void startCNGEngine() {
		cout<<"\nStarting the CNG engine...";
	}
};

/* vtable <-- &HybridEngine::startEngine()
 * 		  <-- &PetrolEngine::startPetrolEngine()
 	 	  <-- &CNGEngine::startCNGEngine()
 	 	  <-- &HybridEngine::startHybridEngine()
 */

class HybridEngine : public PetrolEngine, public CNGEngine
{
	public:
		HybridEngine() {
			cout<<"\nHybridEngine()...";
		}

		void startEngine() { //virtual functions are hierarchical in nature
					cout<<"\ninitializing the hybrid engine...";
			}

	void startHybridEngine() {
			cout<<"\nstartHybridEngine()....";
			//startCNGEngine(); // may be the default here
			//if the CNG is over, this of the petrol engine
			 startPetrolEngine();
	}
};


int main() {
	cout << "!!!Hello Engines!!!" << endl; // prints !!!Hello World!!!

	Engine engine;
	engine.startEngine();

	cout<<"\n---------------";

	PetrolEngine petrolEngine;
	petrolEngine.startEngine(); //base
	petrolEngine.startPetrolEngine();

	cout<<"\n---------------";

	CNGEngine cngEngine;
	cngEngine.startEngine(); //base
	cngEngine.startCNGEngine();

	cout<<"\n---------------";

	HybridEngine hybridEngine;
	hybridEngine.startEngine();
	hybridEngine.startHybridEngine();
	hybridEngine.startPetrolEngine();
	hybridEngine.startCNGEngine();



	return 0;
}

/*



 	 	 	 	 	 	 Engine
						|startEngine()
			-----------------------------
			|							|
 	 	PetrolEngine					CNGEngine
 	 		|startPetrolEngine()		|startCNGEngine()
 	 		+---------------------------+
 	 				|
 	 			HybridEngine
					startHybridEngine()
 */

