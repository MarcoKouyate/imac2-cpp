#include "Bus.hpp"

void Bus::Afficher_Infos() const{
	std::cout << "La marque du bus : " << _marque << std::endl;
	std::cout << "La date d'achat du bus : "  << _date_achat << std::endl;
	std::cout << "Le prix d'achat du bus : " << _prix_achat << " euros" << std::endl;
}

Bus::Bus(std::string marque, unsigned int date_achat, unsigned int prix_achat) : Vehicule(marque,date_achat,prix_achat){}