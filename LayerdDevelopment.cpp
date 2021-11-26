//============================================================================
// Name        : LayerdDevelopment.cpp
// Author      : Vishhal
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
/*
  	  	  data
  	  	  |
  	  	  logic
  	  	  |
  	  	  UI

 1 <-- non-volatile data [ db rows | serialized objects ]
 	 	 	 	 food.data

 2 <-- Entities        Pizza		Burger		Tacos  		  	 Dosa

 	 	 	 class Tacos { data + functions }

 3 <-- FoodRepository [ PizzaChef | BurgerChef | TacosChef ]	DosaChef

 	 	 	 class TacosRepository {
 	 	 	 	 	 virtual void insertTacos(Tacos t)=0;
 	 	 	 	 	 virtual void updateTacos(Tacos t)=0;
 	 	 	 	 	 virtual void deleteTacos(Tacos t)=0;
 	 	 	 	 	 virtual Tacos selectTacos(sting cost, type, int id)=0;
 	 	 	 	 	 virtual Tacos selectTacos(string type, int id)=0;
 	 	 	 	 	 virtual Tacos selectTacos(float cost, int id)=0;


 	 	 	 	 	 virtual list<Tacos> selectAllTacos()=0;
 	 	 	 }
 	 	 	 |
 	 	 	 class TasocsRepositoryImpl {
 	 	 	 	 will provide the above 5 methods body; [ object serialization
 	 	 	 	 / deserialization process ]
 	 	 	 }

 4 <-- FoodService [ PizzaServie | BurgerService | TacosService] DosaService

 	 	 	 class TacosService {
 	 	 	 	 	 virtual void createTacosService(Tacos t, string instructions)=0;
 	 	 	 	 	 virtual void modifyTacosService(Tacos t)=0;
 	 	 	 	 	 virtual void removeTacosService(Tacos t)=0;
 	 	 	 	 	 virtual Tacos findTacosService(int id)=0;
 	 	 	 	 	 virtual list<Tacos> findAllTacosService()=0;
 	 	 	 }
 	 	 	 |
 	 	 	 class TacosServiceImpl {
 	 	 	 	 will provide the above 5 service methods
 	 	 	 	 - in these methods we will have to write the
 	 	 	 	 - business logic
 	 	 	 	 virtual void createTacosService(Tacos t, string instructions)
 	 	 	 	 {
 	 	 	 	 	 if(instructins..... takeaway) {
 	 	 	 	 	 	 logic for takeawy.. to wrap it
 	 	 	 	 	 }
 	 	 	 	 	 else
 	 	 	 	 	 else
 	 	 	 	 	 else

 	 	 	 	 }
 	 	 	 }

 	 	 	 class FoodController
 	 	 	 {
 	 	 	 	 	 TacosService tacosService;

 	 	 	 	 	 void takeAway()
 	 	 	 	 	 {
 	 	 	 	 	 	 tacosService.selectTacos(101,"takeaway");

 	 	 	 	 	 }
 	 	 	 	 	 void phoneApp() {
 	 	 	 	 	 	tacosService.selectTacos(102,"fromapp");

 	 	 	 	 	 }
 	 	 	 	 	 void phoneCall() {
 	 	 	 	 	 	 tacosService.selectTacos(103,"bycall");

 	 	 	 	 	 }
 	 	 	 	 	 void dinningTable() {
 	 	 	 	 	 	tacosService.selectTacos(104,"serveHere");

 	 	 	 	 	 }
 	 	 	 }


 TEA CoFEE - five star hotel

 boiled water, boiled milk, cold water, cold milk, ice,
 sugar cubes, tea bags, coffee powder,  spoon

 5 people

 5 <-- FoodController
 	 	 |
 	 ------------------------
 	 |1	 	|2	  |3	|4
  TakeAway Phone  App	Dinning
   Food	   Food	  Food	Table
  Tacos   Tacos Tacos	Tacos

 6 <-- user Interaction is here
 	 	 console IO
 	 	 GUI IO
 	 	 forms from the net
 	 	 touch pad

 */
