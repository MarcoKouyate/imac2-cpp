#include <iostream>



int main (){
	std::string chaine = "";

	std::cout << "Veuillez saisir une chaine de caracteres"<<std::endl;
	
	std::cin >> chaine; //entrée par l'utilisateur

	std::cout << "String size : " << chaine.length() << "\nLast element : " << chaine.back() << std::endl;
	
	chaine.pop_back();

	std::cout << "Apres suppression : " << chaine << std::endl;

	chaine.insert(0,"IMAC ");

	std::cout << "Apres l'ajout de IMAC : " << chaine << std::endl; 

	return 0;
}