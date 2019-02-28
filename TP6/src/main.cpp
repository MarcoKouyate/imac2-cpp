 #include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
int a = 10;
int b = 0;
std::cout << "a/2 = " << a/2 << std::endl;
try {
	std::cout << "a/b = " << a/b << std::endl;
		if (b==0){
			throw exception("Il est impossible de diviser par zéro");
		}
}

catch (exception e){
	std::cerr << "Erreur : " << e.what() << std::endl;
}

std::cout << "a/5 = " << a/5 << std::endl;
std::cout << "Termin´e !! " << std::endl;
return 0;
}