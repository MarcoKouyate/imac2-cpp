#include <iostream>
#include <array>



int main (){

	size_t arraySize = 0;

	std::cout << "Veuillez saisir la taille du tableau" << std::endl;

	std::cin >> arraySize;

	int*  entiers = new int(arraySize);

	for (size_t i = 0;  i < arraySize ; i++) {
		std::cout << "Veuillez saisir l'entrée : " << i << std::endl;
		std::cin >> entiers[i];
	}

	std::cout << "Voici la liste des entrées : " << std::endl;

	for (size_t i = 0;  i < arraySize ; i++) {
		std::cout << "Entree " << i << " : " << entiers[i] << std::endl;
	}

	std::cout << "Voici l'adresse mémoire des trois premiers elements : " << std::endl;

	for (size_t i = 0;  i < 3; i++) {
		std::cout << "Addresse " << i << " : " << &entiers[i] << std::endl;
	}

	std::cout << "La taille d'un element : " << sizeof(entiers[0]) << std::endl;

	std::cout << "front is: " << *entiers<< std::endl;   // 2
 

	delete[] entiers;
	return 0;
}