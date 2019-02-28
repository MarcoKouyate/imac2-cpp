#include <iostream>
#include <algorithm>  
#include <vector>
#include "Vehicule.hpp"
#include "Voiture.hpp"
#include "Bus.hpp"

void Afficher(Vehicule * ptr){
	ptr->Afficher_Infos();
	std::cout << std::endl;
}

int main (){
	Bus bus1("Mercedes", 2008, 10380.00f);
	Voiture voiture1("Renault", 2018, 380.00f);

	std::vector <Vehicule *> garage;
	garage.push_back(&bus1);
	garage.push_back(&voiture1);

	for_each (garage.begin(), garage.end(), Afficher);


	garage.clear();
}

