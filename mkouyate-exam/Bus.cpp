#include "Bus.hpp"

void Bus::Afficher_Infos() const{
	std::cout << "Marque : " << _marque << " / Date d'achat : " << _date_achat << " / Prix d'achat : " << _prix_achat << " euros" << std::endl;
}

Bus::Bus(std::string marque, unsigned int date_achat, unsigned int prix_achat) : Vehicule(marque,date_achat,prix_achat){}