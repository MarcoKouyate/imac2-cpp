#ifndef Carre_HPP__
#define Carre_HPP__

#include <iostream>
#include <cstdio>


class Carre : public Rectangle {


	public:
		Carre(const double c) : Rectangle(c,c){};
		Carre() : Rectangle(){};

		double getCote() const {
			return getLargeur();
		};

		void setCote(double c){
			setLargeur(c);
			setHauteur(c);
		};
};

#endif