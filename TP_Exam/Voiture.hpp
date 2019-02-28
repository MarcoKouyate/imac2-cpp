#ifndef Voiture_HPP__
#define Voiture_HPP__

#include "Vehicule.hpp"
#include <iostream>
#include <cstdio>


class Voiture : public Vehicule {
	public:
		Voiture(std::string marque, unsigned int date_achat, unsigned int prix_achat) ;
		void Afficher_Infos() const;

};


		

#endif