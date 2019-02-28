#include <iostream>
#include <cstdio>
#include "Rectangle.hpp"
#include "Carre.hpp"


int main() {
	Rectangle r1(2.6, 4.42), r2;
	Carre c1(3.8), c2;
	std::cout << "Surface de r1 : " << r1.surface() << std::endl;
	std::cout << "Surface de r2 : " << r2.surface() << std::endl;
	std::cout << "Surface de c1 : " << c1.surface() << std::endl;
	std::cout << "Surface de c2 : " << c2.surface() << std::endl;
	r1.setLargeur(3.9);
	c2.setCote(2.9);
	std::cout << "Largeur de r1 : " << r1.getLargeur() << std::endl;
	std::cout << "Largeur de c2 : " << c2.getCote() << std::endl;

}
