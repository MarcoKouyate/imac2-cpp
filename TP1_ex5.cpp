#include <iostream>
#include <array>



int main (){

	//
	int a = 0;
	int b = 0;
	int n1 = 0;
	int n2 = 0;
	float residu = 0.0f;
	float total = 0.0f;

	//Interface
	std::cout << "Entrez le premier entier" << std::endl;
	std::cin >> n1;
	std::cout << "Entrez le second entier" << std::endl;
	std::cin >> n2;

	//comparaison entre A et B
	if (n1 < n2) {
		a = n1;
		b = n2;
	} else {
		b = n1;
		a = n2;
	}
	std::cout << "La multiplication russe entre " << a << " et " << b <<" : " << std::endl;



	//
	while (a!=1){
		if (a & 1){
			a-=1;
			residu += b;
			a = a >> 1;
			b = b << 1;


		} else {
			a = a >> 1;
			b = b << 1;
		}
	}

	total = b + residu;
	std::cout << total << std::endl;



	return 0;
}