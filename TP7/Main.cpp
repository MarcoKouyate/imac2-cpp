#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>


int main(){
	
//EXERCICE 1
	std::cout << "======== EXERCICE 1 =======" << std::endl;

	//Declarer un vecteur vide contenant des entiers
	std::vector<int> v;

	//Afficher si le vecteur est vide
	if (v.empty()){
		std::cout << "Le vecteur est vide" << std::endl;
	}

	//afficher la taille du vecteur
	std::cout << "Taille du vecteur : " <<  v.size() << std::endl;

	//afficher la taille maximale d’un vecteur d’entiers
	std::cout << "Taille maximale du vecteur : " << v.max_size() <<std::endl;


	//introduire quelques éléments dans le vecteur
	v.push_back(15);
	v.push_back(30);
	v.push_back(200);

	//afficher la  nouvelle taille du vecteur
	std::cout << "Nouvelle taille du vecteur : " <<  v.size() << std::endl;

	//afficher contenu dans le vecteur
	std::cout << "Contenu du vecteur : " ;
	for (std::vector<int>::const_iterator i = v.begin(); i != v.end(); ++i){
		    std::cout << *i << ' ';
	}
	std::cout << std::endl;


//EXERCICE 2
	std::cout << "======== EXERCICE 2 =======" << std::endl;

	//créer deux vecteurs v1 et v2 contenant des strings
	std::vector<std::string> v1;
	std::vector<std::string> v2;

	v1.push_back("Test");
	v2.push_back("Swap");

	std::cout << "v1 : ";
	for (std::vector<std::string>::const_iterator i = v1.begin(); i != v1.end(); ++i){
		    std::cout << *i << ' ';
	}
	std::cout << std::endl;

	std::cout << "v2 : ";
	for (std::vector<std::string>::const_iterator i = v2.begin(); i != v2.end(); ++i){
		    std::cout << *i << ' ';
	}
	std::cout << std::endl;

	//échanger les valeurs entre les vecteurs
	std::swap(v1,v2);

	std::cout << "------- swap" << std::endl;

	std::cout << "v1 : ";
	for (std::vector<std::string>::const_iterator i = v1.begin(); i != v1.end(); ++i){
		    std::cout << *i << ' ';
	}
	std::cout << std::endl;

	std::cout << "v2 : ";
	for (std::vector<std::string>::const_iterator i = v2.begin(); i != v2.end(); ++i){
		    std::cout << *i << ' ';
	}
	std::cout << std::endl;

//EXERCICE 3
	std::cout << "======== EXERCICE 3 =======" << std::endl;

	//definir un vecteur de 20 entiers;
	std::vector<int> v3(20); 

	std::cout << "v3 : ";
	for (unsigned int i = 0; i < v3.size(); ++i){
		    v3[i] = rand() % 21;     
		    std::cout << v3[i] << ' '; 
	}
	std::cout << std::endl;

	//trier les vecteurs
	 std::sort(v3.begin(), v3.end());

	 std::cout << "v3 trié : ";
	for (unsigned int i = 0; i < v3.size(); ++i){
		    std::cout << v3[i] << ' '; 
	}
	std::cout << std::endl;

	//compter le nombre de 7 dans le vecteur
	unsigned int count= std::count(v3.begin(), v3.end(), 7);
	std::cout << count << std::endl;


//EXERCICE 4
	std::cout << "======== EXERCICE 4 =======" << std::endl;;	

	//définir une file `a double extr´emit´e (la deque) de 5 elements;
	std::deque<int> d1(5);

	std::cout << "Initialisation de la deque : ";
	for (unsigned int i = 0; i < d1.size(); ++i){
		 d1[i] = rand() % 10;     
		 std::cout << d1[i] << ' '; 
	}
	std::cout << std::endl;


	//introduction des nouveaux chiffres 
	for (unsigned int i = 0; i < 5; ++i){
		 int currentNumber = rand() % 10;     
		 d1.push_front (currentNumber);
		 d1.pop_back();
		 std::cout << "Initialisation de " << currentNumber << ": ";
			for (unsigned int i = 0; i < d1.size(); ++i){
  
				 std::cout << d1[i] << ' '; 
			}
		std::endl;	 
	}










	return 0;
}