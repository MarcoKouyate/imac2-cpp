#include <iostream>


int main (){
	int number=0; //déclare un entier

	std::cout << "Veuillez saisir un nombre."<<std::endl;
	
	std::cin >> number; //entrée par l'utilisateur

	//CONDITION
	if (number == 79){
		std::cout << "Parfait !"<< std::endl;
	} else if (number <= 0){
		std::cout << "Négatif"<< std::endl;
	} else if (number > 0) {
		std::cerr << "Strictement positif !" << std::endl; //sortie erreur
	}
	
	return 0;
}