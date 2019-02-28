#ifndef Vehicule_HPP__
#define Vehicule_HPP__

#include <iostream>
#include <cstdio>


class Vehicule {
	protected:
		std::string _marque;
		unsigned int _date_achat;
		unsigned int  _prix_achat;
	public:
		//Vehicule();
		Vehicule(std::string marque, unsigned int date_achat, unsigned int prix_achat);
		~Vehicule();

		virtual void Afficher_Infos() const= 0;
		std::string GetMarque() const;
		unsigned int GetDate_Achat() const;
		unsigned int GetPrix_Achat() const;


		

};

#endif