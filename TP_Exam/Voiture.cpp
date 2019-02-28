#include "Voiture.hpp"

void Voiture::Afficher_Infos() const{
	std::cout << "La marque de la voiture : " << _marque << std::endl;
	std::cout << "La date d'achat de la voiture : "  << _date_achat << std::endl;
	std::cout << "Le prix d'achat de la voiture : " << _prix_achat << " euros" << std::endl;
}

Voiture::Voiture(std::string marque, unsigned int date_achat, unsigned int prix_achat) : Vehicule(marque,date_achat,prix_achat){}