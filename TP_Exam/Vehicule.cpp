#include "Vehicule.hpp"


Vehicule::Vehicule(std::string marque, unsigned int date_achat, unsigned int prix_achat) :
	_marque(marque), _date_achat(date_achat), _prix_achat(prix_achat)
{

}

Vehicule::~Vehicule(){};




std::string Vehicule::GetMarque() const {
	return _marque;
};

unsigned int Vehicule::GetDate_Achat() const {
	return _date_achat;
};

unsigned int Vehicule::GetPrix_Achat() const {
	return _prix_achat;
};
