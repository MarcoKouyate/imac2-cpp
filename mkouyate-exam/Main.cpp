#include <iostream>
#include "Vehicule.hpp"
#include "Voiture.hpp"
#include "Bus.hpp"

int main (){
	Bus bus("Mercedes", 2008, 10380.00f);
	Voiture voiture("Renault", 2018, 380.00f);

	std::cout << bus.GetMarque() << std::endl;
	std::cout << bus.GetDate_Achat() << std::endl;
	std::cout << bus.GetPrix_Achat() << std::endl;
	bus.Afficher_Infos();
}