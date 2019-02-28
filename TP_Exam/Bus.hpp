#ifndef Bus_HPP__
#define Bus_HPP__

#include "Vehicule.hpp"
#include <iostream>
#include <cstdio>


class Bus : public Vehicule {
	public:
		Bus(std::string marque, unsigned int date_achat, unsigned int prix_achat) ;
		void Afficher_Infos() const;

};


		

#endif