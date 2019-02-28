#ifndef Rectangle_HPP__
#define Rectangle_HPP__

#include <iostream>
#include <cstdio>


class Rectangle {
	protected:
		double _largeur;
		double _hauteur;
	public:
		Rectangle();
		Rectangle(double l, double h);

		double getLargeur() const {
			return _largeur;
		};
		double getHauteur() const {
			return _hauteur;
		};
		void setLargeur(double l){
			_largeur = l;
		};
		void setHauteur(double h){
			_hauteur = h;
		};
		double surface() const{
			return _largeur*_hauteur;
		};
};

#endif